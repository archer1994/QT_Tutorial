#include "mythread.h"
#include<iostream>
using namespace std;
MyThread::MyThread()
{
}
void MyThread::run()
{
    for( int i = 0; i < 20; i++ ) {
               msleep(1000);
                cout<<i<<endl;
    }
}
