/********************************************************************************
** Form generated from reading UI file 'tauxchange.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAUXCHANGE_H
#define UI_TAUXCHANGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TauxChange
{
public:
    QLabel *Title;
    QLabel *Message;
    QSpinBox *NewTaux;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *NewVal;

    void setupUi(QDialog *TauxChange)
    {
        if (TauxChange->objectName().isEmpty())
            TauxChange->setObjectName(QString::fromUtf8("TauxChange"));
        TauxChange->resize(530, 428);
        TauxChange->setStyleSheet(QString::fromUtf8("color: rgb(229, 188, 49);\n"
"font: italic 12pt \"Cambria\";\n"
"background-color: rgb(33, 37, 41);"));
        Title = new QLabel(TauxChange);
        Title->setObjectName(QString::fromUtf8("Title"));
        Title->setGeometry(QRect(110, 20, 301, 101));
        Title->setStyleSheet(QString::fromUtf8("\n"
"font: italic 25pt \"Cambria\";\n"
""));
        Title->setAlignment(Qt::AlignCenter);
        Message = new QLabel(TauxChange);
        Message->setObjectName(QString::fromUtf8("Message"));
        Message->setGeometry(QRect(10, 240, 341, 51));
        Message->setStyleSheet(QString::fromUtf8("\n"
"font: italic 15pt \"Cambria\";\n"
""));
        Message->setAlignment(Qt::AlignCenter);
        NewTaux = new QSpinBox(TauxChange);
        NewTaux->setObjectName(QString::fromUtf8("NewTaux"));
        NewTaux->setGeometry(QRect(400, 250, 81, 31));
        NewTaux->setStyleSheet(QString::fromUtf8("border-color: rgb(229, 188, 49)"));
        pushButton = new QPushButton(TauxChange);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(380, 360, 111, 31));
        pushButton_2 = new QPushButton(TauxChange);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(380, 320, 111, 31));
        label = new QLabel(TauxChange);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 340, 91, 31));
        NewVal = new QLabel(TauxChange);
        NewVal->setObjectName(QString::fromUtf8("NewVal"));
        NewVal->setGeometry(QRect(170, 340, 91, 31));

        retranslateUi(TauxChange);

        QMetaObject::connectSlotsByName(TauxChange);
    } // setupUi

    void retranslateUi(QDialog *TauxChange)
    {
        TauxChange->setWindowTitle(QCoreApplication::translate("TauxChange", "Dialog", nullptr));
        Title->setText(QCoreApplication::translate("TauxChange", "Changement de taux", nullptr));
        Message->setText(QCoreApplication::translate("TauxChange", "A combien voulez vous changer le taux : ", nullptr));
        pushButton->setText(QCoreApplication::translate("TauxChange", "Close", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TauxChange", "Confirmer", nullptr));
        label->setText(QCoreApplication::translate("TauxChange", "New Val = ", nullptr));
        NewVal->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TauxChange: public Ui_TauxChange {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAUXCHANGE_H
