#include <QCoreApplication>
#include <QThread>
#include "myobject.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QThread cThread; //creat a thread
    MyObject cObject; //creat an instance of MyObject

    cObject.doSetup(cThread); //pass the thread to the MyObject setup
    cObject.moveToThread(&cThread); // take the object and move it to the thread

    cThread.start(); //start the thread

    return a.exec();
}
