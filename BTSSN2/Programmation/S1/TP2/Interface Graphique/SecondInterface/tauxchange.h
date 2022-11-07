#ifndef TAUXCHANGE_H
#define TAUXCHANGE_H

#include <QDialog>
#include <QMainWindow>
#include <QTimer>


QT_BEGIN_NAMESPACE
namespace Ui {
class TauxChange;
class MainWindow;
}
QT_END_NAMESPACE

class TauxChange : public QDialog
{
    Q_OBJECT

public:
    explicit TauxChange(QWidget *parent = nullptr);
    ~TauxChange();
    float EnvoiTaux();
    void change();


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

private:
    Ui::TauxChange *ui;
    QTimer *timer ;
    int cpt ;
    float Newtaux ;
};



#endif // TAUXCHANGE_H
