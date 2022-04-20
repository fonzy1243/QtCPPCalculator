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
/* 
 * n = neutral
 * a = addition
 * s = subtraction
 * m = multiplication
 * d = division
 * o = modulus
 * p = power
 * factorial happens once the button is clicked, hence it does not need an operation variable
*/
char operation = 'n';
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

/*
double factorial(double x)
{
    while (x < 0)
    {

    }
}
*/


QtCPPCalculator::QtCPPCalculator(QWidget* parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.displayField->text();
}

// code below for when buttons are clicked
void QtCPPCalculator::on_zero_clicked()
{
    inputNumber = "0";
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
    inputNumber = "1";
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
    inputNumber = "2";
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
    inputNumber = "3";
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
    inputNumber = "4";
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
    inputNumber = "5";
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
    inputNumber = "6";
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
    inputNumber = "7";
    if (ui.displayField->text() == "0") {
        currentNumber = "7";
        ui.displayField->setText(inputNumber);
        displayNumber = currentNumber;
    }
    else
    {
        currentNumber = ui.displayField->text().append(inputNumber);
        ui.displayField->setText(ui.displayField->text() + inputNumber);
        displayNumber = currentNumber;
    }

    equationNumber = currentNumber;
    ui.equationDisplayField->setText(equationNumber);
}

void QtCPPCalculator::on_eight_clicked()
{
    inputNumber = "8";
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
    inputNumber = "9";
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
        ui.equationDisplayField->setText("0");
    }
    else if (ui.displayField->text().isEmpty() || ui.displayField->text().isNull())
    {
        ui.displayField->setText("0");
        ui.equationDisplayField->setText("0");
    }
    else if (ui.displayField->text().size() == 1) {
        displayNumber = "0";
        ui.displayField->setText(displayNumber);
        ui.equationDisplayField->setText(displayNumber);
        currentNumber = displayNumber;
    }
    else
    {
        displayNumber.remove((displayNumber.size() - 1), 1);
        ui.displayField->setText(displayNumber);
        currentNumber, equationNumber = displayNumber;
        ui.equationDisplayField->setText(equationNumber);
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

    if (operation =='a') {
        operation = 'n';
    }
    else if (operation != 'a') {
        ui.subtract->setChecked(false);
        ui.multiply->setChecked(false);
        ui.divide->setChecked(false);
        equationNumber.remove((equationNumber.size() - 1), 1);
        ui.equationDisplayField->setText(equationNumber);
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

    if (operation != 's') {
        ui.add->setChecked(false);
        ui.multiply->setChecked(false);
        ui.divide->setChecked(false);
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

    if (operation != 'm') {
        ui.add->setChecked(false);
        ui.subtract->setChecked(false);
        ui.divide->setChecked(false);
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

    if (operation != 'd') {
        ui.add->setChecked(false);
        ui.subtract->setChecked(false);
        ui.multiply->setChecked(false);
    }
    
    operation = 'd';
}

void QtCPPCalculator::on_clear_clicked()
{
    currentNumber, previousNumber = "0";
    ui.displayField->setText("0");
    ui.equationDisplayField->setText("0");
    ui.add->setChecked(false);
    ui.subtract->setChecked(false);
    ui.multiply->setChecked(false);
    ui.divide->setChecked(false);
}

void QtCPPCalculator::on_equal_clicked()
{
    switch (operation) {
        case 'a':
            result = previousNumber.toDouble() + currentNumber.toDouble();
            ui.displayField->setText(QString::number(result));
    }
}

/* NOT WORKING
void QtCPPCalculator::ifDisplayBlank()
{
    while (ui.displayField->text().isNull()) {
        ui.displayField->setText("0");
    }
}
*/