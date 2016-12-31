#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QtCore>


class myThread : public QThread
{
public:
    myThread();
    void run();
    QString name;
    bool Stop;
};

#endif // MYTHREAD_H
