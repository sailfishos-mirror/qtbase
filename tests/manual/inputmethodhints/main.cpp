// Copyright (C) 2016 The Qt Company Ltd.
// SPDX-License-Identifier: LicenseRef-Qt-Commercial OR GPL-3.0-only

#include "inputmethodhints.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    inputmethodhints w;
    w.showMaximized();
    return a.exec();
}
