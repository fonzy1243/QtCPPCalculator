#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCPPCalculator.h"

class QtCPPCalculator : public QMainWindow
{
    Q_OBJECT

public:
    QtCPPCalculator(QWidget *parent = Q_NULLPTR);
   // void ifDisplayBlank(); NOT WORKING

private slots:
    
    void on_zero_clicked();
    void on_one_clicked();
    void on_two_clicked();
    void on_three_clicked();
    void on_four_clicked();
    void on_five_clicked();
    void on_six_clicked();
    void on_seven_clicked();
    void on_eight_clicked();
    void on_nine_clicked();
    void on_del_clicked();


private:
    Ui::QtCPPCalculatorClass ui;
};