#include <QCoreApplication>
#include "myclock.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    myClock CLOCK;

    return a.exec();
}

