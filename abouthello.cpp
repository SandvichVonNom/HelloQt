#include "abouthello.h"
#include "ui_abouthello.h"
#include <QMessageBox>
#include <iostream>

aboutHello::aboutHello(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aboutHello)
{
    ui->setupUi(this);
}

aboutHello::~aboutHello()
{
    delete ui;
}

void aboutHello::on_aboutHelloBtn_clicked()
{
    QMessageBox::critical(0, "My Title", "My text");
    std::cout << "2";
}
