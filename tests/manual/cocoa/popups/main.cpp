// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include <QtWidgets>

class Window : public QWidget
{
    Q_OBJECT

public:
    Window();

public slots:
   void triggered(QAction*);
   void clean();
   void showPoppWindow();

private:
    QLabel *explanation;
   QToolButton *toolButton;
   QMenu *menu;
   QLineEdit *echo;
   QComboBox *comboBox;
   QPushButton *pushButton;
};

Window::Window()
{
   QGroupBox* group = new QGroupBox(tr("test the popup"));

   explanation = new QLabel(
       "This test is used to verify that popup windows will be closed "
       "as expected. This includes when clicking outside the popup or moving the "
       "parent window. Tested popups include context menus, combo box popups, tooltips "
       "and QWindow with Qt::Popup set."
   );
   explanation->setWordWrap(true);
   explanation->setToolTip("I'm a tool tip!");

   menu = new QMenu(group);
   menu->addAction(tr("line one"));
   menu->addAction(tr("line two"));
   menu->addAction(tr("line three"));
   menu->addAction(tr("line four"));
   menu->addAction(tr("line five"));

   QMenu *subMenu1 = new QMenu();
   subMenu1->addAction("1");
   subMenu1->addAction("2");
   subMenu1->addAction("3");
   menu->addMenu(subMenu1);

   QMenu *subMenu2 = new QMenu();
   subMenu2->addAction("2 1");
   subMenu2->addAction("2 2");
   subMenu2->addAction("2 3");
   menu->addMenu(subMenu2);

   toolButton = new QToolButton(group);
   toolButton->setMenu(menu);
   toolButton->setPopupMode( QToolButton::MenuButtonPopup );
   toolButton->setText("select me");

   echo = new QLineEdit(group);
   echo->setPlaceholderText("not triggered");

   connect(menu, SIGNAL(triggered(QAction*)), this, SLOT(triggered(QAction*)));
   connect(menu, SIGNAL(aboutToShow()), this, SLOT(clean()));

   comboBox = new QComboBox();
   comboBox->addItem("Item 1");
   comboBox->addItem("Item 2");
   comboBox->addItem("Item 3");

   pushButton = new QPushButton("Show popup window");
   connect(pushButton, SIGNAL(clicked()), this, SLOT(showPoppWindow()));

   QVBoxLayout* layout = new QVBoxLayout;
   layout->addWidget(explanation);
   layout->addWidget(toolButton);
   layout->addWidget(echo);
   layout->addWidget(comboBox);
   layout->addWidget(pushButton);

   group ->setLayout(layout);
   setLayout(layout);
   setWindowTitle(tr("Popup Window Testing"));
}

void Window::clean()
{
   echo->setText("");
}

void Window::showPoppWindow()
{
    QWindow *window = new QWindow();
    window->setTransientParent(this->windowHandle());
    window->setPosition(this->pos());
    window->setWidth(100);
    window->setHeight(100);
    window->setFlags(Qt::Window | Qt::Popup);
    window->show();
}

void Window::triggered(QAction* act)
{
   if (!act)
       return;
   echo->setText(act->text());
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    Window window;
    window.show();
    return app.exec();
}

#include "main.moc"
