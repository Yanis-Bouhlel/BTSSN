#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), CompteurLCD1(0), CompteurLCD2(0), timer (new QTimer)
{
    ui->setupUi(this);
    ui->LCD1->display(0);
    ui->LCD2->display(0);
    ui->LCD3->display(3);
    ui->LCD4->display(4);

    connect(ui->BTN1, &QPushButton::clicked, this, &MainWindow::BoutonCompteur);
    timer->start(1000);
    connect(timer, &QTimer::timeout, this, &MainWindow::LcdTimer);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::BoutonCompteur()
{

    CompteurLCD1++ ;
    ui->LCD1->display(CompteurLCD1) ;
}

void MainWindow::LcdTimer()
{
    CompteurLCD2++;
    ui->LCD2->display(CompteurLCD2);
}
