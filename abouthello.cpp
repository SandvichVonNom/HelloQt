#include "abouthello.h"
#include "ui_abouthello.h"

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
