#ifndef WIDGET_H
#define WIDGET_H

#include <QGLWidget>
#include<QKeyEvent>
#include<vector>
using namespace std;
class Vertex{
public:
    double x;
    double y;
    double z;
    Vertex(double x,double y,double z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
};
class Widget : public QGLWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget * parent = 0, const QGLWidget * shareWidget = 0, Qt::WindowFlags f = 0);
protected:
    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);
    void keyPressEvent(QKeyEvent *);
private:
    bool wireframe;
    vector<Vertex> circle;
};

#endif // WIDGET_H
