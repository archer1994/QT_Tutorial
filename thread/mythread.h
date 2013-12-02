#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>

class MyThread : public QThread
{
    Q_OBJECT
public:
    explicit MyThread();
    void run();
signals:

public slots:

};

#endif // MYTHREAD_H
