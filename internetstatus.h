#ifndef INTERNETSTATUS_H
#define INTERNETSTATUS_H

#include <QProcess>
#include <QThread>

/**
 * @brief 判断当前网络连接状态
 * @author 王宾
 * @date 创建时间 2023-12-22
 * @version 1.0
 * @property ：功能接口
 */

class InternetStatus : public QThread
{
    Q_OBJECT
public:
    explicit InternetStatus();

    virtual void run();
    void stop();
signals:
    void send_network_connect_state(int state);

private:
    bool flagRunning;   //线程运行标志
    QProcess *network_process;

};


#endif // INTERNETSTATUS_H
