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
