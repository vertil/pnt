#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <QColor>
#include <QPainter>
#include <QString>
#include <QPixmap>
#include <QtWidgets>




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    Ui::MainWindow *ui;
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    QWidget * getlabel();
    QWidget * getform();
    int getPenSize();
    QColor getColor();
    int getTool();
    void getmian(MainWindow * _m);
    QString fileAdr;
protected:

private slots:
    void offall();
    bool setLabeltext(QString g);

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_dial_valueChanged(int value);

    void on_pushButton_3_clicked();

    void on_dial_3_valueChanged(int value);

    void on_dial_4_valueChanged(int value);

    void on_dial_2_valueChanged(int value);

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_actionOpenfile_triggered();



    void on_actionSavefile_triggered();

private:

    int tool=0;
    bool line=false;
    bool circle=false;
    bool square=false;
    bool eclipse=false;
    int penSize=0;
    QColor color;
    int ca,cb,cc;
    QString spenSize="0";
    QPixmap image;


};


#endif  //MAINWINDOW_H
