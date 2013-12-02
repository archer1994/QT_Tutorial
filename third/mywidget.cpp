#include "mywidget.h"
#include<QPushButton>
#include<QPainter>
#include<Qpen>
#include<QBrush>
#include<QColor>
MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent)
{
}
MyWidget::~MyWidget()
{
    delete image;
}

void MyWidget::paintEvent(QPaintEvent *event)
{
    if(image==NULL)
    {
        //初始化image
        image=new QImage(this->width(),this->height(),QImage::Format_ARGB32);
        QPainter p(image);
        p.fillRect(0,0,image->width(),image->height(),QBrush(QColor(255,255,255)));
    }
    QPainter painter(this);
    painter.drawImage(0,0,*image);
    if(move)
    {
        painter.fillRect(startX,startY,endX-startX,endY-startY,QBrush(QColor(255,0,0)));
    }


}
void MyWidget::mousePressEvent(QMouseEvent *event)
{
    startX=event->x();
    startY=event->y();
    move=true;
}
void MyWidget::mouseMoveEvent(QMouseEvent *event)
{
    endX=event->x();
    endY=event->y();
    repaint();
}
void MyWidget::mouseReleaseEvent(QMouseEvent *event)
{
    endX=event->x();
    endY=event->y();
    move=false;
    //鼠标放开将图形绘制在image上
    QPainter p(image);
    p.fillRect(startX,startY,endX-startX,endY-startY,QBrush(QColor(255,0,0)));
    repaint();
}

