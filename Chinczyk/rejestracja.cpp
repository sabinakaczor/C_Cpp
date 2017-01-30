#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rejestracja.h"
#include "ui_rejestracja.h"
#include "QtGui"
#include <QMessageBox>
#include <QInputDialog>
#include <string>
#include <iostream>
#include <QString>
#include <rozgrywka.h>

using namespace std;

Rejestracja::Rejestracja(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Rejestracja)
{
    ui->setupUi(this);
    ui->listWidget->setVisible(false);
}

Rejestracja::~Rejestracja()
{
    delete ui;
}

void Rejestracja::on_buttonBox_accepted()
{
    update();
}

void Rejestracja::on_setPlayersQty_clicked()
{
    int qty = 0;
    if(ui->radioButton2->isChecked()) {
        qty = 2;
    } else if(ui->radioButton3->isChecked()) {
        qty = 3;
    } else if(ui->radioButton4->isChecked()) {
        qty = 4;
    } else {
        QMessageBox msg;
        msg.setWindowTitle("Ups");
        msg.setText("Wybierz liczbę graczy!");
        msg.exec();
    }

    if (qty>0) {

        vector<QString> players;
        vector<Gracz*> players1;
        QString text = "";
        for(int i=1; i<=qty; ++i) {
            QString title = "Gracz " + QString::number(i);
            bool ok;
            text = QInputDialog::getText(this, title,
                                                 tr("Podaj imię:"), QLineEdit::Normal,
                                                 NULL, &ok);
            if(ok && !text.isEmpty()) {
                players.push_back(text);
            }

        }
        for(int j=0; j<players.size(); ++j) {
            QListWidgetItem *qlwi = new QListWidgetItem(players[j]);
            ui->listWidget->addItem(qlwi);
            players1.push_back(new Gracz(text.toStdString()));
        }
        Rozgrywka *game = new Rozgrywka(players1);
        MainWindow w;
        w.start_game(game);

        ui->listWidget->setVisible(true);
    }

}
