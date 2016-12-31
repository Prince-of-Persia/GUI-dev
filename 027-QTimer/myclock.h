#ifndef MYCLOCK_H
#define MYCLOCK_H

#include <QtCore>

class myClock : public QObject
{
    Q_OBJECT //converts the class to a Qt object

public:
    myClock();
    QTimer *timer;

public slots:
    void MySlot();
};

#endif // MYCLOCK_H
