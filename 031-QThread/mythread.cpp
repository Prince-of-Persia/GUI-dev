#include "mythread.h"
#include <QtCore>

myThread::myThread(QObject *parent) :
    QThread(parent)
{

}

void myThread::run()
{
    QMutex mutex;
    for(int i = 0; i <10000; i++)
    {
        mutex.lock();
        if (this->Stop) break;
        mutex.unlock();
        emit NumberChanged(i);
        this->msleep(10);
    }
}

