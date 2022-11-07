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
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionTaux_de_Change;
    QAction *actionQuitter;
    QAction *actionA_propos;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QDoubleSpinBox *InNumbersDollar;
    QLabel *TauxChange;
    QLabel *ValDollar;
    QLabel *Title;
    QDoubleSpinBox *InNumbersEuro;
    QPushButton *Btnconv;
    QLabel *ValEuro;
    QMenuBar *menubar;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(564, 454);
        MainWindow->setStyleSheet(QString::fromUtf8("color: rgb(229, 188, 49);\n"
"font: italic 12pt \"Cambria\";\n"
"background-color: rgb(33, 37, 41);"));
        actionTaux_de_Change = new QAction(MainWindow);
        actionTaux_de_Change->setObjectName(QString::fromUtf8("actionTaux_de_Change"));
        actionQuitter = new QAction(MainWindow);
        actionQuitter->setObjectName(QString::fromUtf8("actionQuitter"));
        actionA_propos = new QAction(MainWindow);
        actionA_propos->setObjectName(QString::fromUtf8("actionA_propos"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        InNumbersDollar = new QDoubleSpinBox(centralwidget);
        InNumbersDollar->setObjectName(QString::fromUtf8("InNumbersDollar"));
        InNumbersDollar->setMaximum(1000000000000000000.000000000000000);

        gridLayout->addWidget(InNumbersDollar, 3, 1, 1, 1);

        TauxChange = new QLabel(centralwidget);
        TauxChange->setObjectName(QString::fromUtf8("TauxChange"));
        TauxChange->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(TauxChange, 5, 0, 1, 2);

        ValDollar = new QLabel(centralwidget);
        ValDollar->setObjectName(QString::fromUtf8("ValDollar"));
        ValDollar->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ValDollar, 3, 0, 1, 1);

        Title = new QLabel(centralwidget);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setStyleSheet(QString::fromUtf8("font: 700 italic 26pt \"Cambria\";"));
        Title->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Title, 0, 0, 1, 2);

        InNumbersEuro = new QDoubleSpinBox(centralwidget);
        InNumbersEuro->setObjectName(QString::fromUtf8("InNumbersEuro"));
        InNumbersEuro->setMaximum(1000000000000000000.000000000000000);

        gridLayout->addWidget(InNumbersEuro, 1, 1, 1, 1);

        Btnconv = new QPushButton(centralwidget);
        Btnconv->setObjectName(QString::fromUtf8("Btnconv"));
        Btnconv->setStyleSheet(QString::fromUtf8("background-color: rgb(33, 37, 41);\n"
"font: 700  14pt \"Cambria\";"));

        gridLayout->addWidget(Btnconv, 2, 0, 1, 2);

        ValEuro = new QLabel(centralwidget);
        ValEuro->setObjectName(QString::fromUtf8("ValEuro"));
        ValEuro->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(ValEuro, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 564, 25));
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName(QString::fromUtf8("menuFichier"));
        menuAide = new QMenu(menubar);
        menuAide->setObjectName(QString::fromUtf8("menuAide"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuFichier->addAction(actionTaux_de_Change);
        menuFichier->addSeparator();
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionA_propos);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionTaux_de_Change->setText(QCoreApplication::translate("MainWindow", "Taux de Change", nullptr));
        actionQuitter->setText(QCoreApplication::translate("MainWindow", "Quitter", nullptr));
        actionA_propos->setText(QCoreApplication::translate("MainWindow", "A Propos", nullptr));
        TauxChange->setText(QCoreApplication::translate("MainWindow", "Taux de Conversion : 1 euro = 1,05 Dollars Us", nullptr));
        ValDollar->setText(QCoreApplication::translate("MainWindow", "Valeur en Dollars", nullptr));
        Title->setText(QCoreApplication::translate("MainWindow", "Convertisseur", nullptr));
        Btnconv->setText(QCoreApplication::translate("MainWindow", "Convertir", nullptr));
        ValEuro->setText(QCoreApplication::translate("MainWindow", "Valeur en Euro", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("MainWindow", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("MainWindow", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
