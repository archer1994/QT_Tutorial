#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include<QPushButton>
class MyWidget : public QWidget
{
    Q_OBJECT
private:
    QPushButton *pb1;
    QPushButton *pb2;
    QPushButton *pb3;
public:
    explicit MyWidget(QWidget *parent = 0);
    ~MyWidget();
signals:

public slots:
    void pb1_clicked();
};

#endif // MYWIDGET_H
