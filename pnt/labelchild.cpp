#include "labelchild.h"

labelchild::labelchild(QWidget *parent)
{


}

labelchild::~labelchild()
{

}



void labelchild::mousePressEvent(QMouseEvent *event)
{

    x=event->x();
    y=event->y();
    move=true;

}

void labelchild::mouseMoveEvent(QMouseEvent *event)
{
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
    paintthis.setPen(QPen(QBrush(QColor(mian->getColor())),mian->getPenSize()));
    paintthis.drawPixmap(0,0,image);
    if(x!=NULL)
    switch (tool) {
        case 0: ;
                if(move==true)
                {
                    paintthis.drawLine(x,y,x1,y1);
                }else{
                    paint.drawLine(x,y,x2,y2);
                    paintthis.drawPixmap(0,0,image);
                    nullXY();
                }
                break;
        case 1:
                if(move==true)
                {
                    paintthis.drawEllipse(x,y,x1,x1);
                }else{
                    paint.drawEllipse(x,y,x2,x2);
                    paintthis.drawPixmap(0,0,image);
                    nullXY();
                }
                break;

        case 2:
                if(move==true)
                {
                    paintthis.drawRect(x,y,x1,y1);
                }else{
                    paint.drawRect(x,y,x2,y2);
                    paintthis.drawPixmap(0,0,image);
                    nullXY();
        }
        break;

        case 3:
                if(move==true)
                {
                    paintthis.drawEllipse(x,y,x1,y1);
                }else{
                    paint.drawEllipse(x,y,x2,y2);
                    paintthis.drawPixmap(0,0,image);
                    nullXY();
                }
                break;
    }
}

void labelchild::mouseReleaseEvent(QMouseEvent *event)
{
    move =false;
    x2=event->x();
    y2=event->y();
    update();

}

void labelchild::nullXY()
{
    x=NULL;
    y=NULL;
    x1=NULL;
    y1=NULL;
    x2=NULL;
    y2=NULL;

}

/*void labelchild::addline()
{
    QPainter p(this);
    p.drawLine(x,y,x1,y1);
    p.end();
    this->update();
}*/

void labelchild::setimage_(QPixmap *r)
{

    image=*r;
    this->setPixmap(image);
    this->setSizeIncrement(image.size());

    //after setpixmap i write qpainter to draw pixmap and not work, but in paint event;
}

void labelchild::saveimage()
{
    QFile file(QFileDialog::getSaveFileName(this, tr("Save File"),
                                            "/home/jana/untitled.png",
                                            tr("Images (*.png *.xpm *.jpg)")));
    file.open(QIODevice::WriteOnly);
    image.save(&file);




}

void labelchild::setTool()
{
    tool=mian->getTool();
}

