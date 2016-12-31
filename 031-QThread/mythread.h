#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class myThread : public QThread
{
    Q_OBJECT
public:
    explicit myThread(QObject *patent = 0);
    void run();
    bool Stop = false;

signals:
    void NumberChanged(int);

public slots:

};

#endif // MYTHREAD_H
