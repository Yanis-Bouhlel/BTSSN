#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void BoutonCompteur();
    void LcdTimer();


private:
    Ui::MainWindow *ui;
    int CompteurLCD1, CompteurLCD2 ;
    QTimer *timer ;
};
#endif // MAINWINDOW_H
