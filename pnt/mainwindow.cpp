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

QWidget * MainWindow::getlabel(){
    return ui->writingarea;

}

int MainWindow::getPenSize()
{
    return penSize;
}

QColor MainWindow::getColor()
{
    return color;
}

int MainWindow::getTool()
{
    return tool;
}

void MainWindow::getmian(MainWindow *_m)
{
    ui->writingarea->mian=_m;
}

bool MainWindow::setLabeltext(QString g)
{
    ui->label->setText(g);
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
    tool=0;
}

void MainWindow::on_pushButton_2_clicked()
{
    tool=1;
}


void MainWindow::on_dial_valueChanged(int value)
{

    penSize=value;
    spenSize=spenSize.setNum(value);
    ui->label->setText(spenSize);
}

void MainWindow::on_pushButton_3_clicked()
{
    tool=2;
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
    tool=3;
}

void MainWindow::on_actionOpenfile_triggered()
{
    image=QFileDialog::getOpenFileName();
    if(image.isNull()){
        return;
    }
   ui->writingarea->setimage_(&image);

}


