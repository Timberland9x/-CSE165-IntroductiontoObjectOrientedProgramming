#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QDebug>

double fNum;
bool userIsTypingSecondNumber = false;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->pushButton_0, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8, SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9, SIGNAL(released()),this,SLOT(digit_pressed()));

    connect(ui->pushButton_negpos, SIGNAL(released()),this,SLOT(unary_operation_pressed()));
    connect(ui->pushButton_per, SIGNAL(released()),this,SLOT(unary_operation_pressed()));

    connect(ui->pushButton_plus, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_minus, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_mul, SIGNAL(released()),this,SLOT(binary_operation_pressed()));
    connect(ui->pushButton_div, SIGNAL(released()),this,SLOT(binary_operation_pressed()));


    ui->pushButton_plus->setCheckable(true);
    ui->pushButton_minus->setCheckable(true);
    ui->pushButton_mul->setCheckable(true);
    ui->pushButton_div->setCheckable(true);
    //qDebug().nospace()<<"start of plus button: " << ui->pushButton_plus->isChecked();


}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed()
{
    //qDebug().nospace()<<"digit_pressed";

    QPushButton * button = (QPushButton *) sender();

    double lNum;
    QString newLabel;

    if((ui->pushButton_plus->isChecked() || ui->pushButton_minus->isChecked() ||
            ui->pushButton_mul->isChecked() || ui->pushButton_div->isChecked()) && (!userIsTypingSecondNumber))
    {

        //qDebug().nospace()<<"doing an operation like add or minus and etc...";
        lNum = button->text().toDouble();
        userIsTypingSecondNumber = true;
        newLabel = QString::number(lNum, 'g',15);

    }
    else{
        if(ui->display->text().contains('.') && button->text() == "0")
        {
             newLabel = ui->display->text() + button->text();
        }
        else
        {
            lNum = (ui->display->text() + button->text()).toDouble();
            newLabel = QString::number(lNum, 'g',15);
        }
    }
    ui -> display->setText(newLabel);
//qDebug()<<"test";
}


void MainWindow::on_pushButton_dot_released()
{
    ui->display->setText(ui->display->text()+".");
}

void MainWindow::unary_operation_pressed()
{
    QPushButton * button = (QPushButton *) sender();

    double lNum;
    QString newLabel;
    if(button->text() == "+/-"){
        lNum = ui->display->text().toDouble();
        lNum = lNum * -1;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
    }
    if(button->text() == "%"){
        lNum = ui->display->text().toDouble();
        lNum = lNum * .01;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
    }

}


void MainWindow::on_pushButton_clear_released()
{
    ui->pushButton_plus->setChecked(false);
    ui->pushButton_minus->setChecked(false);
    ui->pushButton_mul->setChecked(false);
    ui->pushButton_div->setChecked(false);

    userIsTypingSecondNumber = false;

    ui->display->setText("0");
}

void MainWindow::on_pushButton_equal_released()
{
    //qDebug().nospace()<<"on_pushButton_equal_released";

    double lNum, sNum;
    QString newLabel;


    sNum = ui->display->text().toDouble();

    if(ui->pushButton_plus->isChecked())
    {
        lNum = fNum + sNum;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
        ui->pushButton_plus->setChecked(false);

    }
    else if(ui->pushButton_minus->isChecked())
    {
        lNum = fNum - sNum;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
        ui->pushButton_minus->setChecked(false);
    }
    else if(ui->pushButton_mul->isChecked())
    {
        lNum = fNum * sNum;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
        ui->pushButton_mul->setChecked(false);
    }
    else if(ui->pushButton_div->isChecked())
    {
        lNum = fNum / sNum;
        newLabel = QString::number(lNum, 'g', 15);
        ui -> display -> setText(newLabel);
        ui->pushButton_div->setChecked(false);
    }

    userIsTypingSecondNumber = false;

 qDebug().nospace()<<"Button is : " << ui->pushButton_plus->isChecked();
}
void MainWindow::binary_operation_pressed()
{
    //qDebug().nospace()<<"binary_operation_pressed: and f num: " << fNum;
    QPushButton * button = (QPushButton *) sender();
    fNum = ui->display->text().toDouble();
    button->setChecked(true);



}

