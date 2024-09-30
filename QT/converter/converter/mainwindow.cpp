#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{ // *9/5  + 32
    float f= ( ui->textEdit->toPlainText().toFloat() *(9.0/5.0))+32;
    ui->label->setText(QString::number(f)+" 'F");
}

