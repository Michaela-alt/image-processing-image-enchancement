/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_6;
    QTextBrowser *textBrowser_6;
    QTextBrowser *textBrowser_8;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *display1;
    QLabel *display2;
    QLabel *display4;
    QLabel *display5;
    QLabel *display6;
    QLabel *display3;
    QLabel *label_12;
    QLabel *label_3;
    QTextBrowser *textBrowser_4;
    QPushButton *BackGroundButtom;
    QLabel *label_7;
    QLabel *label_13;
    QLabel *label_9;
    QScrollBar *horizontalScrollBar;
    QLabel *label_5;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_5;
    QSlider *horizontalSlider;
    QLabel *label_8;
    QLabel *label_10;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *Nightmode_2;
    QLabel *label_4;
    QTextBrowser *textBrowser_7;
    QLabel *label_1;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QPushButton *Nightmode;
    QLabel *label_11;
    QCheckBox *checkBox_4;
    QSpinBox *spinBox;
    QCheckBox *checkBox;
    QTextBrowser *textBrowser_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1236, 889);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(830, 700, 59, 14));
        textBrowser_6 = new QTextBrowser(centralwidget);
        textBrowser_6->setObjectName(QString::fromUtf8("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(220, 760, 81, 31));
        textBrowser_8 = new QTextBrowser(centralwidget);
        textBrowser_8->setObjectName(QString::fromUtf8("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(220, 840, 81, 31));
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 50, 1221, 601));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        display1 = new QLabel(gridLayoutWidget);
        display1->setObjectName(QString::fromUtf8("display1"));

        gridLayout->addWidget(display1, 1, 0, 1, 1);

        display2 = new QLabel(gridLayoutWidget);
        display2->setObjectName(QString::fromUtf8("display2"));

        gridLayout->addWidget(display2, 1, 1, 1, 1);

        display4 = new QLabel(gridLayoutWidget);
        display4->setObjectName(QString::fromUtf8("display4"));

        gridLayout->addWidget(display4, 2, 0, 1, 1);

        display5 = new QLabel(gridLayoutWidget);
        display5->setObjectName(QString::fromUtf8("display5"));

        gridLayout->addWidget(display5, 2, 1, 1, 1);

        display6 = new QLabel(gridLayoutWidget);
        display6->setObjectName(QString::fromUtf8("display6"));

        gridLayout->addWidget(display6, 2, 2, 1, 1);

        display3 = new QLabel(gridLayoutWidget);
        display3->setObjectName(QString::fromUtf8("display3"));

        gridLayout->addWidget(display3, 1, 2, 1, 1);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(170, 810, 51, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(830, 10, 59, 14));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QString::fromUtf8("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(1070, 0, 41, 31));
        BackGroundButtom = new QPushButton(centralwidget);
        BackGroundButtom->setObjectName(QString::fromUtf8("BackGroundButtom"));
        BackGroundButtom->setGeometry(QRect(60, 10, 191, 25));
        BackGroundButtom->setCheckable(true);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(420, 700, 59, 14));
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(170, 850, 31, 21));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 810, 21, 21));
        horizontalScrollBar = new QScrollBar(centralwidget);
        horizontalScrollBar->setObjectName(QString::fromUtf8("horizontalScrollBar"));
        horizontalScrollBar->setGeometry(QRect(469, 695, 161, 21));
        horizontalScrollBar->setMinimum(1);
        horizontalScrollBar->setMaximum(300);
        horizontalScrollBar->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 740, 91, 21));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(30, 810, 81, 31));
        textBrowser_5 = new QTextBrowser(centralwidget);
        textBrowser_5->setObjectName(QString::fromUtf8("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(650, 690, 41, 31));
        horizontalSlider = new QSlider(centralwidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(900, 10, 160, 16));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(20);
        horizontalSlider->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 770, 21, 21));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(170, 740, 101, 21));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(450, 10, 89, 25));
        pushButton->setCheckable(false);
        pushButton->setChecked(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(420, 10, 59, 14));
        Nightmode_2 = new QPushButton(centralwidget);
        Nightmode_2->setObjectName(QString::fromUtf8("Nightmode_2"));
        Nightmode_2->setGeometry(QRect(550, 10, 89, 25));
        Nightmode_2->setCheckable(false);
        Nightmode_2->setChecked(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 690, 59, 21));
        textBrowser_7 = new QTextBrowser(centralwidget);
        textBrowser_7->setObjectName(QString::fromUtf8("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(220, 800, 81, 31));
        label_1 = new QLabel(centralwidget);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(20, 10, 59, 14));
        checkBox_2 = new QCheckBox(centralwidget);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(900, 730, 92, 23));
        checkBox_2->setCheckable(false);
        checkBox_3 = new QCheckBox(centralwidget);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(900, 760, 92, 23));
        checkBox_3->setCheckable(false);
        Nightmode = new QPushButton(centralwidget);
        Nightmode->setObjectName(QString::fromUtf8("Nightmode"));
        Nightmode->setGeometry(QRect(650, 10, 89, 25));
        Nightmode->setCheckable(false);
        Nightmode->setChecked(false);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(170, 770, 41, 21));
        checkBox_4 = new QCheckBox(centralwidget);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));
        checkBox_4->setGeometry(QRect(900, 790, 92, 23));
        checkBox_4->setCheckable(false);
        spinBox = new QSpinBox(centralwidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(60, 690, 111, 31));
        spinBox->setFocusPolicy(Qt::StrongFocus);
        spinBox->setToolTipDuration(1);
        spinBox->setProperty("showGroupSeparator", QVariant(false));
        spinBox->setMinimum(1);
        spinBox->setMaximum(200);
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(900, 700, 92, 23));
        checkBox->setCheckable(false);
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(30, 770, 81, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1236, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Contour", nullptr));
        display1->setText(QString());
        display2->setText(QString());
        display4->setText(QString());
        display5->setText(QString());
        display6->setText(QString());
        display3->setText(QString());
        label_12->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Smooth", nullptr));
        BackGroundButtom->setText(QCoreApplication::translate("MainWindow", "BackGround Detection", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Line", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Point Clicked", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Pixel Intensity", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Init", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "LK", nullptr));
        Nightmode_2->setText(QCoreApplication::translate("MainWindow", "Daymode", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Edge", nullptr));
        label_1->setText(QCoreApplication::translate("MainWindow", "Raw", nullptr));
        checkBox_2->setText(QCoreApplication::translate("MainWindow", "Green", nullptr));
        checkBox_3->setText(QCoreApplication::translate("MainWindow", "Blue", nullptr));
        Nightmode->setText(QCoreApplication::translate("MainWindow", "Nightmode", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
        checkBox_4->setText(QCoreApplication::translate("MainWindow", "Default", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Red", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
