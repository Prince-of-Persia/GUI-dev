#include <QCoreApplication>
#include "mythread.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myThread mThread1;
    mThread1.name = "mthread1";

    myThread mThread2;
    mThread2.name = "mthread2";

    myThread mThread3;
    mThread3.name = "mthread3";

    mThread1.start();
    mThread2.start();
    mThread3.start();

    return a.exec();
}
