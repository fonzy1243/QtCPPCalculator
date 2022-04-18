#include "QtCPPCalculator.h"
#include "stdafx.h"
#include <iostream>

double num1;
double num2;
double displayNumber;
double result;
int currentEdit = 1;

double sum(double x, double y)
{
    return x + y;
}

double diff(double x, double y)
{
    return x - y;
}

double product(double x, double y)
{
    return x * y;
}

double quotient(double x, double y)
{
    return x / y;
}

QtCPPCalculator::QtCPPCalculator(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
}

void QtCPPCalculator::on_nine_clicked()
{
    if (currentEdit == 1) {
        num1 = 9;
    }
}

