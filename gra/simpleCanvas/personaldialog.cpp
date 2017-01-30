#include "personaldialog.h"
#include "ui_personaldialog.h"

PersonalDialog::PersonalDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PersonalDialog)
{
    ui->setupUi(this);

}

PersonalDialog::~PersonalDialog()
{
    delete ui;
}

void PersonalDialog::on_buttonBox_accepted()
{
    accept();
}

void PersonalDialog::on_buttonBox_rejected()
{
    reject();
}
QString PersonalDialog::imie() const{
    return ui->imie->text();
}
QString PersonalDialog::nazwisko() const{
    return ui->nazwisko->text();
}

QString PersonalDialog::kolor() const{
    if(ui->radioButton_cz->isChecked())
        //ui->radioButton_cz->setChecked(false);
        return "czerwony";
    else if(ui->radioButton_nie->isChecked())
        return "niebieski";
    else if(ui->radioButton_zo->isChecked())
        return "zolty";
    else if(ui->radioButton_zi->isChecked())
        return "zielony";
    else
        return "";
}
