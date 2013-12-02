#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QPushButton>
#include<QMouseEvent>
#include<QPaintEvent>
#include<QImage>
class MyWidget : public QWidget
{
    Q_OBJECT
public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();
protected:
    void paintEvent(QPaintEvent * event);
    void mouseMoveEvent(QMouseEvent *);
    void mousePressEvent(QMouseEvent *);
    void mouseReleaseEvent(QMouseEvent *);
private:
    int startX;
    int startY;
    int endX;
    int endY;
    bool move;
    QImage *image;
signals:

public slots:

};

#endif // MYWIDGET_H
