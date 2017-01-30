#include "rejestracjagraczy.h"
#include "ui_rejestracjagraczy.h"
#include "personaldialog.h"
#include "gra.h"

#include <string>
#include <iostream>
#include <QMdiSubWindow>
#include <QMessageBox>
using namespace std;
RejestracjaGraczy::RejestracjaGraczy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RejestracjaGraczy)
{
    ui->setupUi(this);
    QStringList titles;
    ui->tableWidget->setColumnCount(3);
    titles<<"Imie"<<"Nazwisko"<<"Kolor";
    ui->tableWidget->setHorizontalHeaderLabels(titles);

   // ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);// nie edytowalna tablica

}

RejestracjaGraczy::~RejestracjaGraczy()
{
    delete ui;
}

void RejestracjaGraczy::on_add_player_clicked()
{


    int res,row;
    QString imie,nazwisko,kolor;
    if(ui->tableWidget->rowCount()==4){
        QMessageBox msgBox;
        msgBox.setText("Maksymalna ilosc graczy - cztery!!!");
        msgBox.exec();
    } else{
    PersonalDialog pd(this);

    pd.setWindowTitle("Dodanie gracza");
    res=pd.exec();
    if (res==QDialog::Rejected)
        return;
    imie = pd.imie();
    nazwisko = pd.nazwisko();
    kolor = pd.kolor();

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    row = ui->tableWidget->rowCount()-1;
    ui->tableWidget->setItem(row,IMIE,new QTableWidgetItem(imie));
    ui->tableWidget->setItem(row,NAZWISKO,new QTableWidgetItem(nazwisko));
    QTableWidgetItem *item;
    item=new QTableWidgetItem(kolor);
    item->setFlags(item->flags() & ~Qt::ItemIsEditable);
    ui->tableWidget->setItem(row,KOLOR,item);


}}

void RejestracjaGraczy::on_start_game_clicked()
{
   // vector<Gracz*> graczy;
   // graczy.push_back(new Gracz("a","b","czerwony",0,0,4));
    Gra gr(this);
    for (int i=0; i<ui->tableWidget->rowCount();i++){
     // ui->tableWidget->item(i,2)->text();
    gr.dodajGracza(new Gracz(ui->tableWidget->item(i,0)->text().toStdString()  ,ui->tableWidget->item(i,1)->text().toStdString() , ui->tableWidget->item(i,2)->text().toStdString()  ));
   }
    gr.przygotujSieDoGry();

    gr.setWindowTitle("Gra w Chinczyka");
    gr.exec();
//gr.graj(iloscgraczy);

}

