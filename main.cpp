#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <iostream>

void messageHandler(QtMsgType type, const QMessageLogContext&, const QString& msg)
{
    std::cerr << type << ": " << msg.toLatin1().data() << "\n";
}

int main(int argc, char *argv[])
{
    // I have no idea why, but Qt's stock qDebug() output never makes it
    // to /var/log/lightdm/x-0-greeter.log, so we use std::cerr instead..
    qInstallMessageHandler(messageHandler);

    QApplication a(argc, argv);

    MainWindow *focusWindow = 0;
    for (int i = 0; i < QApplication::desktop()->screenCount(); ++i) {
        MainWindow *w = new MainWindow(i);
        w->show();
        if (w->isPrimaryScreen()) {
            focusWindow = w;
        }
    }

    // Ensure we set the primary screen's widget as active when there
    // are more screens
    if (focusWindow) {
        focusWindow->setFocus(Qt::OtherFocusReason);
        focusWindow->activateWindow();
    }

    return a.exec();
}
