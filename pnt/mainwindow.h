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
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

protected:
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void paintEvent(QPaintEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;
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

private:
    Ui::MainWindow *ui;
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

};

#endif // MAINWINDOW_H
