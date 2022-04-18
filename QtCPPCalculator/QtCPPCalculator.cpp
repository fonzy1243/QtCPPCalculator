#include "QtCPPCalculator.h"
#include "stdafx.h"
#include <iostream>

double currentNumber;
double previousNumber;
double displayNumber;
double result;

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

