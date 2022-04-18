#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCPPCalculator.h"

class QtCPPCalculator : public QMainWindow
{
    Q_OBJECT

public:
    QtCPPCalculator(QWidget *parent = Q_NULLPTR);

private slots:
    void on_nine_clicked();

private:
    Ui::QtCPPCalculatorClass ui;
};

double num1;
double num2;
double displayNumber;
double result;
int currentEdit = 1;
