#include "mythread.h"
#include <QtCore>
#include <QDebug>

myThread::myThread()
{

}

void myThread::run()
{
    qDebug() << this->name <<"Running";
    QMutex mutex;
    for (int i = 0; i < 100000; i++)
    {
        mutex.lock();
        if(this->Stop)
        {
            break;
        }
        mutex.unlock();
        this->sleep(1);
        qDebug() << this->name << i;
    }
}
