#include "mywidget.h"
#include<QPushButton>
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent)
{
    pb1=new QPushButton("button1",this);
    pb2=new QPushButton("button2",this);
    pb3=new QPushButton("button3",this);
    pb1->setGeometry(10,10,100,20);
    pb2->setGeometry(30,50,100,30);
    pb3->setGeometry(200,50,100,100);

}
MyWidget::~MyWidget()
{
    delete pb1;
    delete pb2;
    delete pb3;
}
