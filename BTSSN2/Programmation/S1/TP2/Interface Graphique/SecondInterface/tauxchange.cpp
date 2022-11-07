#include "tauxchange.h"
#include "ui_tauxchange.h"
#include "QAction"
#include "QMessageBox"
#include "ui_mainwindow.h"
#include "QMessageBox"

TauxChange::TauxChange(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TauxChange) , timer(new QTimer)
{
    ui->setupUi(this);
    timer->start(1000);

}


TauxChange::~TauxChange()
{
    delete ui;
}

float TauxChange::EnvoiTaux()
{
    on_pushButton_2_clicked();
    return  ui->NewTaux->value();
}
void TauxChange::change()
{
    cpt++;
    if (cpt == 10)
    {
        EnvoiTaux();
    }
}
void TauxChange::on_pushButton_clicked()
{
    EnvoiTaux();
    close();
}


void TauxChange::on_pushButton_2_clicked()
{
    ui->NewVal->setNum(ui->NewTaux->value());
}

