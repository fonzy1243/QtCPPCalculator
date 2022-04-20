#include "QtCPPCalculator.h"
#include "stdafx.h"
#include "ui_QtCPPCalculator.h"
#include <qstring.h>
#include <iostream>
#include <string>
using namespace std;

QString currentNumber = "0";
QString previousNumber = "0";
QString displayNumber = "0";
QString equationNumber = "0";
QString inputNumber;
char operation;
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
    ui.displayField->text();
}

// code below for when buttons are clicked
void QtCPPCalculator::on_zero_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "0";
        currentNumber = "0";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "0";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_one_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "1";
        currentNumber = "1";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "1";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_two_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "2";
        currentNumber = "2";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "2";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_three_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "3";
        currentNumber = "3";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "3";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_four_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "4";
        currentNumber = "4";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "4";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_five_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "5";
        currentNumber = "5";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "5";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_six_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "6";
        currentNumber = "6";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "6";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_seven_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "7";
        currentNumber = "7";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "7";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_eight_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "8";
        currentNumber = "8";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "8";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_nine_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "9";
        currentNumber = "9";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        inputNumber = "9";
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_del_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("0");
    }
    else if (ui.displayField->text() == "")
    {
        ui.displayField->setText("0");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text().remove(ui.displayField->text().last(1)));
    }
}

void QtCPPCalculator::on_add_toggled()
{
    /*                                                                                                                       *
     *  we use "0" as a neutral value, so this first block activates if the user has not already inputted a previous number. *
     *                                                                                                                       */
    if (previousNumber == "0") {
        previousNumber = currentNumber;
        currentNumber = "0";
        ui.displayField->setText("0");
        ui.equationDisplayField->setText(ui.equationDisplayField->text() + "+");
    }
}

void QtCPPCalculator::on_clear_clicked()
{
    currentNumber, previousNumber, displayNumber, inputNumber = "0";
    ui.displayField->setText("0");
    ui.equationDisplayField->setText("0");
}

/* NOT WORKING
void QtCPPCalculator::ifDisplayBlank()
{
    while (ui.displayField->text().isNull()) {
        ui.displayField->setText("0");
    }
}
*/