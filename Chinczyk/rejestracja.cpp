#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rejestracja.h"
#include "ui_rejestracja.h"
#include "QtGui"

Rejestracja::Rejestracja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rejestracja)
{
    ui->setupUi(this);
}

Rejestracja::~Rejestracja()
{
    delete ui;
}

void Rejestracja::on_buttonBox_accepted()
{
    //clicked = true;
    update();
}
