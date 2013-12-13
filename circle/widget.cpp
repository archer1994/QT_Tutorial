#include "widget.h"
#include<cmath>
using namespace std;
Widget::Widget(QWidget * parent, const QGLWidget * shareWidget, Qt::WindowFlags f ) :
    QGLWidget(parent, shareWidget, f )
{
    wireframe=false;
}
void Widget::initializeGL()
{
    double PI=3.1415926;
    for(double degree=0.0;degree<360;degree+=1.0)
    {
        circle.push_back(Vertex(0,0,0));
        circle.push_back(Vertex(1*cos(degree/180*PI),1*sin(degree/180*PI),0));
        circle.push_back(Vertex(1*cos((degree+1)/180*PI),1*sin((degree+1)/180*PI),0));
    }
}
void Widget::paintGL()
{
    double PI=3.1415926;
    glClear(GL_COLOR_BUFFER_BIT);
    if(wireframe)
        //绘制线框
        glPolygonMode(GL_FRONT,GL_LINE);
    else
        //绘制填充的图形
        glPolygonMode(GL_FRONT,GL_FILL);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glColor3d(1,0,0);
    glBegin(GL_TRIANGLES);
    for(int i=0;i<circle.size();i++)
    {
        glVertex3d(circle[i].x,circle[i].y,circle[i].z);
    }
    glEnd();
}
void Widget::resizeGL(int w, int h)
{


}
void Widget::keyPressEvent(QKeyEvent *e)
{
    if(e->key()==Qt::Key_Space)
    {
            wireframe=!wireframe;
    }
        repaint();
}

