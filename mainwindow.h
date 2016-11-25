#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton0_clicked();
    void on_pushButton1_clicked();
    void on_pushButton2_clicked();
    void on_pushButton3_clicked();
    void on_pushButton4_clicked();
    void on_pushButton5_clicked();
    void on_pushButton6_clicked();
    void on_pushButton7_clicked();
    void on_pushButton8_clicked();
    void on_pushButton9_clicked();
    void on_pushButtonPoint_clicked();
    void on_pushButtonAdd_clicked();
    void on_pushButtonSubstract_clicked();
    void on_pushButtonMultiply_clicked();
    void on_pushButtonDivide_clicked();
    void on_pushButtonRoot_clicked();
    void on_pushButtonPower_clicked();
    void on_pushButtonC_clicked();
    void on_pushButtonBack_clicked();
    void on_pushButtonEqual_clicked();
    void on_pushButtonSin_clicked();
    void on_pushButtonCos_clicked();
    void on_pushButtonTan_clicked();

private:
    Ui::MainWindow *ui;
    int flag = 1;
};

#endif // MAINWINDOW_H
