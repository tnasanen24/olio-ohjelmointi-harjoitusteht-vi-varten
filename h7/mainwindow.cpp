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

void MainWindow::on_btnCount_clicked()
{
    counter++;
    QString s = QString::number(counter);
    QString sentence = "Painiketta painettu %1 kertaa";

    ui->txtResult->setText(s);
    QString labelText = sentence.arg(s);
    ui->labelInfo->setText(labelText);
}


void MainWindow::on_btnReset_clicked()
{
    counter = -1; // tämä koska on_btnCount_clicked incrementoi heti alkuun.
    MainWindow::on_btnCount_clicked(); // tein näin niin ei tarvi uudestaan kirjoittaa
}

