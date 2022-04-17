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
    double result;
    double displayNumber;

    return a.exec();
}
