#include "mainwindow.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QScreen>

MainWindow::MainWindow(int screen, QWidget *parent)
    : QWidget(parent),
      m_screen(screen)
{
    QRect screenRect = QApplication::desktop()->screenGeometry(screen);
    setGeometry(screenRect);
}

MainWindow::~MainWindow()
{

}

bool MainWindow::isPrimaryScreen()
{
    return m_screen == QApplication::desktop()->primaryScreen();
}
