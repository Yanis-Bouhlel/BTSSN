#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <tauxchange.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Convertir();
    void A_Propos();
    void FileParent() ;

protected:
    Ui::MainWindow *ui;
    float taux, valEur, valUsd ;
};
#endif // MAINWINDOW_H
