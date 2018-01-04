#include "advanced_scanning.h"
#include "ui_advanced_scanning.h"

Advanced_scanning::Advanced_scanning(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Advanced_scanning)
{
    ui->setupUi(this);
}

Advanced_scanning::~Advanced_scanning()
{
    delete ui;
}
