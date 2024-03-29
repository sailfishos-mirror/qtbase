// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "window.h"

#include <private/qguiapplication_p.h>

#include <QBackingStore>
#include <QPainter>
#include <QtWidgets>

static int colorIndexId = 0;

QColor colorTable[] =
{
    QColor("#f09f8f"),
    QColor("#a2bff2"),
    QColor("#c0ef8f")
};

Window::Window(QScreen *screen)
    : QWindow(screen)
    , m_backgroundColorIndex(colorIndexId++)
{
    initialize();
}

Window::Window(QWindow *parent)
    : QWindow(parent)
    , m_backgroundColorIndex(colorIndexId++)
{
    initialize();
}

void Window::initialize()
{
    if (parent())
        setGeometry(QRect(160, 120, 320, 240));
    else {
        setGeometry(QRect(10, 10, 640, 480));

        setSizeIncrement(QSize(10, 10));
        setBaseSize(QSize(640, 480));
        setMinimumSize(QSize(240, 160));
    }

    create();
    m_backingStore = new QBackingStore(this);

    m_image = QImage(geometry().size(), QImage::Format_RGB32);
    m_image.fill(colorTable[m_backgroundColorIndex % (sizeof(colorTable) / sizeof(colorTable[0]))].rgba());

    m_lastPos = QPoint(-1, -1);
    m_renderTimer = 0;
}

void Window::mousePressEvent(QMouseEvent *event)
{
    m_lastPos = event->pos();
}

void Window::mouseMoveEvent(QMouseEvent *event)
{
    if (m_lastPos != QPoint(-1, -1)) {
        QPainter p(&m_image);

        QPen pen;
        pen.setCosmetic(true);
        pen.setWidth(1);
        p.setPen(pen);

        p.setRenderHint(QPainter::Antialiasing);
        p.drawLine(m_lastPos, event->pos());
        m_lastPos = event->pos();
    }

    scheduleRender();
}

void Window::wheelEvent(QWheelEvent *event)
{
    qDebug() << "wheelEvent delta" << event->delta() << "orientation" << event->orientation();
    qDebug() << "wheelEvent pixelDelta" << event->pixelDelta();
    qDebug() << "wheelEvent angleDelta" << event->angleDelta();

    const bool useQt4API = false;

    if (useQt4API) {
        if (event->orientation() == Qt::Horizontal)
            scrollOffset.setX(scrollOffset.x() + event->delta());
        else
            scrollOffset.setY(scrollOffset.y() + event->delta());
        scheduleRender();
    } else {
        if (!event->pixelDelta().isNull()) {
            scrollOffset += event->pixelDelta();
            scheduleRender();
        }
    }
}

void Window::mouseReleaseEvent(QMouseEvent *event)
{
    if (m_lastPos != QPoint(-1, -1)) {
        QPainter p(&m_image);
        p.setRenderHint(QPainter::Antialiasing);
        p.drawLine(m_lastPos, event->pos());
        m_lastPos = QPoint(-1, -1);
    }

    scheduleRender();
}

void Window::exposeEvent(QExposeEvent *)
{
    scheduleRender();
}

void Window::resizeEvent(QResizeEvent *)
{
    QImage old = m_image;

    qDebug() << "Window::resizeEvent" << geometry();

    int width = qMax(geometry().width() * devicePixelRatio(), qreal(old.width()));
    int height = qMax(geometry().height() * devicePixelRatio(), qreal(old.height()));

    qDebug() << "Window::resizeEvent" << width << height;

    if (width > old.width() || height > old.height()) {
        m_image = QImage(width, height, QImage::Format_RGB32);
        m_image.setDevicePixelRatio(devicePixelRatio());
        m_image.fill(colorTable[(m_backgroundColorIndex) % (sizeof(colorTable) / sizeof(colorTable[0]))].rgba());

        QPainter p(&m_image);
        p.drawImage(0, 0, old);
    }

    render();
}

void Window::keyPressEvent(QKeyEvent *event)
{
    switch (event->key()) {
    case Qt::Key_Backspace:
        m_text.chop(1);
        break;
    case Qt::Key_Enter:
    case Qt::Key_Return:
        m_text.append('\n');
        break;
    default:
        m_text.append(event->text());
        break;
    }
    scheduleRender();
}

void Window::scheduleRender()
{
    if (!m_renderTimer)
        m_renderTimer = startTimer(1);
}

void Window::timerEvent(QTimerEvent *)
{
    render();
    killTimer(m_renderTimer);
    m_renderTimer = 0;
}

void Window::render()
{
    QRect rect(QPoint(), geometry().size());

    m_backingStore->resize(rect.size());

    m_backingStore->beginPaint(rect);

    QPaintDevice *device = m_backingStore->paintDevice();

    QPainter p(device);
    p.drawImage(0, 0, m_image);

    QFont font;
    font.setPixelSize(32);

    p.setFont(font);
    p.drawText(rect, 0, m_text);

    // draw grid:
    int gridSpace = 80;

    QPen pen;
    pen.setCosmetic(true);
    pen.setWidth(1);
    p.setPen(pen);


    for (int y = 0; y < geometry().height() + gridSpace; y+= gridSpace) {
        int offset = scrollOffset.y() % gridSpace;
        //int color = ((y + offset) %255);// + scrollOffset.y()) % 255);
        p.drawLine(0, y + offset, geometry().width(), y + offset);
        //p.setBrush(QColor(color,0, 0));
        //p.fillRect(0, y + offset, geometry().width(), gridSpace,QColor(color,0, 0));
    }


    for (int x = 0; x < geometry().width() + gridSpace; x+= gridSpace) {
        p.drawLine(x + scrollOffset.x() % gridSpace, 0, x + scrollOffset.x() % gridSpace, geometry().height());
    }

    m_backingStore->endPaint();
    m_backingStore->flush(rect);
}


