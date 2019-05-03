#include "labelchild.h"

labelchild::labelchild(QWidget *parent)
{


}

labelchild::~labelchild()
{

}



void labelchild::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    x=event->x();
    y=event->y();
    update();
}

void labelchild::mouseMoveEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    x1=event->x();
    y1=event->y();
    update();
}

void labelchild::paintEvent(QPaintEvent *event)
{
    setTool();
    QPainter paint(&image);
    QPainter paintthis(this);
    paint.setPen(QPen(QBrush(QColor(mian->getColor())),mian->getPenSize()));
    //paintthis.drawPixmap(0,0,image);
    switch (tool) {
        case 0: ;
                paint.drawLine(x,y,x2,y2);
                paintthis.drawLine(x,y,x1,y1);
                paintthis.drawPixmap(0,0,image);

                break;
        case 1: paint.drawEllipse(x,y,x1,x1); break;

        case 2: paint.drawLine(x,y,(x1-x),y);
                paint.drawLine((x1-x),y,(x1-x),(y1-y));
                paint.drawLine((x1-x),(y1-y),x,(y1-y));
                paint.drawLine(x,(y1-y),x,y);
                break;
        case 3: paint.drawEllipse(x,y,x1,y1); break;
    }
}

void labelchild::mouseReleaseEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)
    x2=event->x();
    y2=event->y();
    update();
}

void labelchild::addline()
{
    QPainter p(this);
    p.drawLine(x,y,x1,y1);
    p.end();
    this->update();
}

void labelchild::setimage_(QPixmap *r)
{

    image=*r;
    this->setPixmap(image);
    this->setSizeIncrement(image.size());
    //after setpixmap i write qpainter to draw pixmap and not work, but in paint event;
}

void labelchild::setTool()
{
    tool=mian->getTool();
}

void labelchild::setLine()
{

}

