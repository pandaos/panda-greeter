#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QWidget>

class MainWindow : public QWidget
{
    Q_OBJECT

public:
    MainWindow(int screen, QWidget *parent = 0);
    ~MainWindow();

    bool isPrimaryScreen();

private:
    int m_screen;
};

#endif // MAINWINDOW_H
