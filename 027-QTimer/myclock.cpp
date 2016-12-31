#include "myclock.h"
#include <QtCore>
#include <QtDebug>

myClock::myClock()
{
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(MySlot()));
    timer->start(1000);
}



void myClock::MySlot()
{
    qDebug() << "timer executed";
}
