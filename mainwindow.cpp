#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include "abouthello.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_menuAboutHello_triggered()
{
    std::cout << "1233131";
    ui->aboutHello->show();
    return;
}