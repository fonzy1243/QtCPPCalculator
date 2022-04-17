#include "QtCPPCalculator.h"
#include "stdafx.h"
#include <QtWidgets/QApplication>
#include <math.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QtCPPCalculator w;
    w.show();
    double num1;
    double num2;
    double displayNumber;
    double result;

    return a.exec();
}

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
