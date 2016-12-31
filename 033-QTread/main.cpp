#include <QCoreApplication>
#include "mythread.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    MyThread mThread;

    mThread.start();
    mThread.wait(); // waits for the thread to complete, (Nothing will get done before the thread is done)
    qDebug() << "Done";
    return a.exec();
}
