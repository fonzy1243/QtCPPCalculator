#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_QtCPPCalculator.h"

class QtCPPCalculator : public QMainWindow
{
    Q_OBJECT

public:
    QtCPPCalculator(QWidget *parent = Q_NULLPTR);

private:
    Ui::QtCPPCalculatorClass ui;
};
