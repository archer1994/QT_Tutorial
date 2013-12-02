
#include"mythread.h"
int main(int argc, char *argv[])
{

    MyThread t1;
    MyThread t2;
    MyThread t3;
    t1.start();
    t2.start();
    t3.start();
    t1.wait();
    t2.wait();
    t3.wait();
    return 0;
}
