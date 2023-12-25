#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "internetstatus.h"

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    InternetStatus* m_internetStatus = nullptr;

public slots:
    void update_network_state(int state); //更新网络状态

};
#endif // MAINWINDOW_H
