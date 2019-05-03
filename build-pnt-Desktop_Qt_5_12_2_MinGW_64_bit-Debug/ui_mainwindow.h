/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "labelchild.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpenfile;
    QAction *actionSavefile;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    labelchild *writingarea;
    QFormLayout *formLayout_3;
    QFormLayout *formLayout;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QDial *dial;
    QLabel *label;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QFormLayout *formLayout_2;
    QDial *dial_3;
    QDial *dial_4;
    QDial *dial_2;
    QPushButton *pushButton_4;
    QMenuBar *menuBar;
    QMenu *menufile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1088, 582);
        actionOpenfile = new QAction(MainWindow);
        actionOpenfile->setObjectName(QString::fromUtf8("actionOpenfile"));
        actionSavefile = new QAction(MainWindow);
        actionSavefile->setObjectName(QString::fromUtf8("actionSavefile"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(881, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        writingarea = new labelchild(centralWidget);
        writingarea->setObjectName(QString::fromUtf8("writingarea"));
        writingarea->setBaseSize(QSize(300, 300));
        QFont font;
        font.setBold(false);
        font.setWeight(50);
        writingarea->setFont(font);

        horizontalLayout->addWidget(writingarea);

        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_2);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_3);

        dial = new QDial(centralWidget);
        dial->setObjectName(QString::fromUtf8("dial"));
        dial->setMaximum(50);

        formLayout->setWidget(5, QFormLayout::LabelRole, dial);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_5);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton);


        formLayout_3->setLayout(0, QFormLayout::LabelRole, formLayout);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        dial_3 = new QDial(centralWidget);
        dial_3->setObjectName(QString::fromUtf8("dial_3"));
        dial_3->setMaximum(255);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, dial_3);

        dial_4 = new QDial(centralWidget);
        dial_4->setObjectName(QString::fromUtf8("dial_4"));
        dial_4->setMaximum(255);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, dial_4);

        dial_2 = new QDial(centralWidget);
        dial_2->setObjectName(QString::fromUtf8("dial_2"));
        dial_2->setMaximum(255);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, dial_2);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, pushButton_4);


        formLayout_3->setLayout(1, QFormLayout::LabelRole, formLayout_2);


        horizontalLayout->addLayout(formLayout_3);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1088, 31));
        menufile = new QMenu(menuBar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menufile->menuAction());
        menufile->addAction(actionOpenfile);
        menufile->addAction(actionSavefile);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionOpenfile->setText(QApplication::translate("MainWindow", "Openfile", nullptr));
        actionSavefile->setText(QApplication::translate("MainWindow", "Savefile", nullptr));
        writingarea->setText(QString());
        pushButton_2->setText(QApplication::translate("MainWindow", "Circle", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "square", nullptr));
        label->setText(QApplication::translate("MainWindow", "0", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "eclipse", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "line", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "SetColor", nullptr));
        menufile->setTitle(QApplication::translate("MainWindow", "file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
