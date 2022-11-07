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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPushButton *BTN1;
    QPushButton *BTN2;
    QPushButton *BTN4;
    QPushButton *BTN3;
    QLCDNumber *LCD1;
    QLCDNumber *LCD2;
    QLCDNumber *LCD3;
    QLCDNumber *LCD4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(902, 488);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        BTN1 = new QPushButton(centralwidget);
        BTN1->setObjectName(QString::fromUtf8("BTN1"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BTN1->sizePolicy().hasHeightForWidth());
        BTN1->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("Yu Gothic UI"));
        font.setPointSize(15);
        BTN1->setFont(font);
        BTN1->setMouseTracking(false);

        gridLayout->addWidget(BTN1, 0, 0, 1, 1);

        BTN2 = new QPushButton(centralwidget);
        BTN2->setObjectName(QString::fromUtf8("BTN2"));
        sizePolicy.setHeightForWidth(BTN2->sizePolicy().hasHeightForWidth());
        BTN2->setSizePolicy(sizePolicy);
        BTN2->setFont(font);
        BTN2->setMouseTracking(false);

        gridLayout->addWidget(BTN2, 0, 1, 1, 1);

        BTN4 = new QPushButton(centralwidget);
        BTN4->setObjectName(QString::fromUtf8("BTN4"));
        sizePolicy.setHeightForWidth(BTN4->sizePolicy().hasHeightForWidth());
        BTN4->setSizePolicy(sizePolicy);
        BTN4->setFont(font);
        BTN4->setMouseTracking(false);

        gridLayout->addWidget(BTN4, 0, 2, 1, 1);

        BTN3 = new QPushButton(centralwidget);
        BTN3->setObjectName(QString::fromUtf8("BTN3"));
        sizePolicy.setHeightForWidth(BTN3->sizePolicy().hasHeightForWidth());
        BTN3->setSizePolicy(sizePolicy);
        BTN3->setFont(font);
        BTN3->setMouseTracking(false);

        gridLayout->addWidget(BTN3, 0, 3, 1, 1);

        LCD1 = new QLCDNumber(centralwidget);
        LCD1->setObjectName(QString::fromUtf8("LCD1"));
        LCD1->setProperty("value", QVariant(0.000000000000000));

        gridLayout->addWidget(LCD1, 1, 0, 1, 1);

        LCD2 = new QLCDNumber(centralwidget);
        LCD2->setObjectName(QString::fromUtf8("LCD2"));

        gridLayout->addWidget(LCD2, 1, 1, 1, 1);

        LCD3 = new QLCDNumber(centralwidget);
        LCD3->setObjectName(QString::fromUtf8("LCD3"));

        gridLayout->addWidget(LCD3, 1, 2, 1, 1);

        LCD4 = new QLCDNumber(centralwidget);
        LCD4->setObjectName(QString::fromUtf8("LCD4"));

        gridLayout->addWidget(LCD4, 1, 3, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 902, 22));
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
        BTN1->setText(QCoreApplication::translate("MainWindow", "Boutton 1 ", nullptr));
        BTN2->setText(QCoreApplication::translate("MainWindow", "Boutton 2", nullptr));
        BTN4->setText(QCoreApplication::translate("MainWindow", "Boutton 3", nullptr));
        BTN3->setText(QCoreApplication::translate("MainWindow", "Boutton 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
