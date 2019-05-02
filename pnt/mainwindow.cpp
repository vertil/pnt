#include "mainwindow.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::setLabeltext(QString g)
{
    ui->label->setText(g);
}

void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton)

    x=event->x();
    y=event->y();

    update();

}

void MainWindow::mouseMoveEvent(QMouseEvent *event)
{
    x1=event->x();
    y1=event->y();
    //b.setX(x);
    //b.setY(y);
    update();
}

void MainWindow::paintEvent(QPaintEvent *event) {

    QPainter paint(ui->writingarea);//
    paint.setPen(QPen(QBrush(QColor(color)),penSize));
    if(line==true){
        paint.drawLine(x,y,x2,y2);
    }
    if(circle==true){
        paint.drawEllipse(x,y,x1,x1);
    }
    if(square==true){
        paint.drawLine(x,y,(x1-x),y);
        paint.drawLine((x1-x),y,(x1-x),(y1-y));
        paint.drawLine((x1-x),(y1-y),x,(y1-y));
        paint.drawLine(x,(y1-y),x,y);
    }
    if(eclipse==true){
        paint.drawEllipse(x,y,x1,y1);
    }
    ui->writingarea->paintEngine();
}

void MainWindow::mouseReleaseEvent(QMouseEvent *event)
{
    x2=event->x();
    y2=event->y();
}

void MainWindow::offall()
{
    line=false;
    circle=false;
    square=false;
    eclipse=false;
}

void MainWindow::on_pushButton_clicked()
{
    offall();
    line=true;
}

void MainWindow::on_pushButton_2_clicked()
{
    offall();
    circle=true;
}


void MainWindow::on_dial_valueChanged(int value)
{

    penSize=value;
    spenSize=spenSize.setNum(value);
    ui->label->setText(spenSize);
}

void MainWindow::on_pushButton_3_clicked()
{
    offall();
    square=true;
}

void MainWindow::on_dial_3_valueChanged(int value)
{
    ca=value;
}

void MainWindow::on_dial_4_valueChanged(int value)
{
    cb=value;
}

void MainWindow::on_dial_2_valueChanged(int value)
{
    cc=value;
}

void MainWindow::on_pushButton_4_clicked()
{
    color.setHsl(ca,cb,cc);
}

void MainWindow::on_pushButton_5_clicked()
{
    offall();
    eclipse=true;
}

void MainWindow::on_actionOpenfile_triggered()
{
    image=QFileDialog::getOpenFileName();
    if(image.isNull()){
        return;
    }
   ui->writingarea->setPixmap(image);
    ui->writingarea->setSizeIncrement(image.width(),image.height());
}

