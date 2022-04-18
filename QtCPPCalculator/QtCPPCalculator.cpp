#include "QtCPPCalculator.h"
#include "stdafx.h"
#include <iostream>

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

