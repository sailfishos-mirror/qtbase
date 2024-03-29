/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -N -p qibusproxyportal -c QIBusProxyPortal interfaces/org.freedesktop.IBus.Portal.xml
 *
 * qdbusxml2cpp is Copyright (C) 2023 The Qt Company Ltd and other contributors.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "qibusproxyportal.h"

/*
 * Implementation of interface class QIBusProxyPortal
 */

QIBusProxyPortal::QIBusProxyPortal(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

QIBusProxyPortal::~QIBusProxyPortal()
{
}

