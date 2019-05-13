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
    explicit labelchild(QWidget *parent = nullptr);
    ~labelchild() override;
    MainWindow * mian;
    void setimage_(QPixmap *r);
    void saveimage();
signals:

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
private slots:

private:
    void nullXY();
    void addline();
    void setTool();
    //void offall();
    QWidget * mainwindow;
    int x,y,x1,y1,x2,y2;
    //int xx,yy,xx1,yy1,xx2,yy2;
    int tool=0;
    QPixmap image;
    bool move=false;
    bool release=false;
    QString adress;

public slots:

};

#endif // LABELCHILD_H
