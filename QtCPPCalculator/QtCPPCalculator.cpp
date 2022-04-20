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
        ui.displayField->setText("0");
        ui.equationDisplayField->setText("0");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "0");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "0");
    currentNumber.append("0");
}

void QtCPPCalculator::on_one_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("1");
        ui.equationDisplayField->setText("1");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "1");
        
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "1");
    currentNumber.append("1");
}

void QtCPPCalculator::on_two_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("2");
        ui.equationDisplayField->setText("2");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "2");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "2");
    currentNumber.append("2");
}

void QtCPPCalculator::on_three_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("3");
        ui.equationDisplayField->setText("3");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "3");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "3");
    currentNumber.append("3");
}

void QtCPPCalculator::on_four_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("4");
        ui.equationDisplayField->setText("4");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "4");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "4");
    currentNumber.append("4");
}

void QtCPPCalculator::on_five_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("5");
        ui.equationDisplayField->setText("5");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "5");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "5");
    currentNumber.append("5");
}

void QtCPPCalculator::on_six_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("6");
        ui.equationDisplayField->setText("6");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "6");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "6");
    currentNumber.append("6");
}

void QtCPPCalculator::on_seven_clicked()
{
    if (ui.displayField->text() == "0") {
        inputNumber = "7";
        currentNumber = "7";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else if (ui.displayField->text() != "0")
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
        ui.displayField->setText("8");
        ui.equationDisplayField->setText("8");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "8");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "8");
    currentNumber += "8";
}

void QtCPPCalculator::on_nine_clicked()
{
    if (ui.displayField->text() == "0") {
        ui.displayField->setText("9");
        ui.equationDisplayField->setText("9");
    }
    else
    {
        ui.displayField->setText(ui.displayField->text() + "9");
    }
    ui.equationDisplayField->setText(ui.equationDisplayField->text() + "9");
    currentNumber += "9";
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

    operation = 'a';
}

void QtCPPCalculator::on_subtract_toggled()
{
    if (previousNumber == "0") {
        previousNumber = currentNumber;
        currentNumber = "0";
        ui.displayField->setText("0");
        ui.equationDisplayField->setText(ui.equationDisplayField->text() + "-");
    }

    operation = 's';
}

void QtCPPCalculator::on_multiply_toggled()
{
    if (previousNumber == "0") {
        previousNumber = currentNumber;
        currentNumber = "0";
        ui.displayField->setText("0");
        ui.equationDisplayField->setText(ui.equationDisplayField->text() +  "*");
    }
    operation = 'm';
}

void QtCPPCalculator::on_divide_toggled()
{
    if (previousNumber == "0") {
        previousNumber = currentNumber;
        currentNumber = "0";
        ui.displayField->setText("0");
        ui.equationDisplayField->setText(ui.equationDisplayField->text() + "/");
    }
    
    operation = 'd';
}

void QtCPPCalculator::on_clear_clicked()
{
    currentNumber, previousNumber = "0";
    currentNumber, previousNumber, displayNumber, inputNumber = "0";
    ui.displayField->setText("0");
    ui.equationDisplayField->setText("0");
    ui.add->setChecked(false);
    ui.subtract->setChecked(false);
    ui.multiply->setChecked(false);
    ui.divide->setChecked(false);
}

/* NOT WORKING
void QtCPPCalculator::ifDisplayBlank()
{
    while (ui.displayField->text().isNull()) {
        ui.displayField->setText("0");
    }
}
*/