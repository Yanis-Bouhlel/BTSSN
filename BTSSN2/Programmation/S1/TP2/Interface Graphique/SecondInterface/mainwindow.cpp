#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) , taux(1.05), valEur(0),valUsd(0)
{
    ui->setupUi(this);
    connect(ui->Btnconv, &QPushButton::clicked, this, &MainWindow::Convertir);
    connect(ui->actionQuitter, &QAction::triggered, this, &MainWindow::close);
    connect(ui->actionA_propos, &QAction::triggered, this, &MainWindow::A_Propos);
    connect(ui->actionTaux_de_Change, &QAction::triggered, this, &MainWindow::FileParent);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Convertir()
{
    valEur = ui->InNumbersEuro->value() ;
    valUsd = valEur * taux ;
    ui->InNumbersDollar->setValue(valUsd);
}

void MainWindow::A_Propos()
{
    QMessageBox::information(this,"A Propos", "Ceci est un convertisseur de monnaie EUR -> USD. ") ;
}

void MainWindow::FileParent()
{
    TauxChange *MainWindow = new TauxChange(this);
    MainWindow->show();
}
