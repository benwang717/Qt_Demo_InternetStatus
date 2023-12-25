#include "mainwindow.h"

#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_internetStatus = new InternetStatus;
    connect(m_internetStatus, SIGNAL(send_network_connect_state(int)), this, SLOT(update_network_state(int)));
    m_internetStatus->start(); //开启网络检测线程

}

MainWindow::~MainWindow() {

}

void MainWindow::update_network_state(int state)
{
    qDebug()<< __FUNCTION__ << ":" <<state;
}
