#ifndef LABELCHILD_H
#define LABELCHILD_H

#include <QMainWindow>
#include <QObject>
#include <QWidget>
#include "mainwindow.h"

class labelchild : public QLabel
{
    Q_OBJECT
public:
    labelchild();

signals:

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private:
    int x,y,x1,y1,x2,y2;
    bool line=false;
    bool circle=false;
    bool square=false;
    bool eclipse=false;
    int penSize=0;
    QColor color;
    int ca,cb,cc;
    QString spenSize="0";
    QPixmap image;
public slots:
};

#endif // LABELCHILD_H
