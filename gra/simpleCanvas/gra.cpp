#include "gra.h"
#include "ui_gra.h"
#include <QPainter>
#include <vector>
#include <string>
#include "gracz.h"
#include "pionek.h"
#include <QPushButton>
#include <ctime>
#include <QMessageBox>

using namespace std;
Gra::Gra(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gra)
{
    ui->setupUi(this);
    this->resize(1300,700);
}

Gra::~Gra()
{
    delete ui;
}
void Gra::paintEvent(QPaintEvent *event)
{

    QPainter painter;
        QPainter p(this);
        p.setRenderHint(QPainter::Antialiasing);
        QPainterPath path_nieb, path_czerw, path_zolte, path_ziel;
        painter.begin(this);
        painter.setRenderHints(QPainter::Antialiasing);
        painter.setPen(Qt::black);
        QRect plansza = QRect(100,100,550,550);
        QRect pole_nieb = QRect(100,100,200,200);
        QRect pole_zolte = QRect(450,100,200,200);
        QRect pole_ziel = QRect(100,450,200,200);
        QRect pole_czer = QRect(450,450,200,200);


        painter.drawRect(plansza);
        painter.drawRect(pole_czer);
        painter.drawRect(pole_nieb);
        painter.drawRect(pole_zolte);
        painter.drawRect(pole_ziel);
        int i,j;
        QRect kwadraciki;
        for (i=100;i<650;i=i+50){
            for (j=300;j<450;j=j+50){

                if (i>=150 && i<=300 && j==350){
                    path_nieb.addRect(QRect(i, j, 50, 50));//niebieskie
                }
                if (i>=400 && i<=550 && j==350){
                    path_czerw.addRect(QRect(i, j, 50, 50));//czerwone
                }//kwadraciki=QRect(i,j,50,50);
                //painter.drawRect(kwadraciki);
            }
        }
        for (i=300;i<450;i=i+50){
            for (j=100;j<650;j=j+50){

                if (j>=150 && j<=300 && i==350){
                    path_zolte.addRect(QRect(i, j, 50, 50));//zolte
                }
                if (j>=400 && j<=550 && i==350){
                    path_ziel.addRect(QRect(i, j, 50, 50));//zielone
                }//kwadraciki=QRect(i,j,50,50);
                //painter.drawRect(kwadraciki);
            }
        }

    //kolka niebieskie
    path_nieb.addEllipse(QRect(125,125,50,50));
    path_nieb.addEllipse(QRect(125,225,50,50));
    path_nieb.addEllipse(QRect(225,125,50,50));
    path_nieb.addEllipse(QRect(225,225,50,50));


    //kolka zolte
    path_zolte.addEllipse(QRect(475,125,50,50));
    path_zolte.addEllipse(QRect(575,125,50,50));
    path_zolte.addEllipse(QRect(475,225,50,50));
    path_zolte.addEllipse(QRect(575,225,50,50));


    //kolka zielone
    path_ziel.addEllipse(QRect(125,475,50,50));
    path_ziel.addEllipse(QRect(225,575,50,50));
    path_ziel.addEllipse(QRect(125,575,50,50));
    path_ziel.addEllipse(QRect(225,475,50,50));


    //kolka czerw
    path_czerw.addEllipse(QRect(475,475,50,50));
    path_czerw.addEllipse(QRect(475,575,50,50));
    path_czerw.addEllipse(QRect(575,475,50,50));
    path_czerw.addEllipse(QRect(575,575,50,50));


    //koloryzuj

    painter.fillPath(path_ziel, QBrush(QColor (000,143,057))); //zielona
    painter.fillPath(path_czerw, QBrush(QColor (248,000,000))); //czerwona
    painter.fillPath(path_zolte, QBrush(QColor (237,255,033))); //żółta
    painter.fillPath(path_nieb, QBrush(QColor (034,113,179))); //niebieska
    painter.drawEllipse(QRect(125,125,50,50));
    painter.drawEllipse(QRect(125,225,50,50));
    painter.drawEllipse(QRect(225,125,50,50));
    painter.drawEllipse(QRect(225,225,50,50));

    painter.drawEllipse(QRect(475,125,50,50));
    painter.drawEllipse(QRect(575,125,50,50));
    painter.drawEllipse(QRect(475,225,50,50));
    painter.drawEllipse(QRect(575,225,50,50));

    painter.drawEllipse(QRect(475,475,50,50));
    painter.drawEllipse(QRect(475,575,50,50));
    painter.drawEllipse(QRect(575,475,50,50));
    painter.drawEllipse(QRect(575,575,50,50));

    painter.drawEllipse(QRect(125,475,50,50));
    painter.drawEllipse(QRect(225,575,50,50));
    painter.drawEllipse(QRect(125,575,50,50));
    painter.drawEllipse(QRect(225,475,50,50));
  //  QRect kwadraciki;
    for (i=100;i<650;i=i+50){
        for (j=300;j<450;j=j+50){

            if (i>=150 && i<=300 && j==350){
               // path_nieb.addRect(QRect(i, j, 50, 50));//niebieskie
            }
            if (i>=400 && i<=550 && j==350){
               // path_czerw.addRect(QRect(i, j, 50, 50));//czerwone
            }kwadraciki=QRect(i,j,50,50);
            painter.drawRect(kwadraciki);
        }
    }
    for (i=300;i<450;i=i+50){
        for (j=100;j<650;j=j+50){

            if (j>=150 && j<=300 && i==350){
               // path_zolte.addRect(QRect(i, j, 50, 50));//zolte
            }
            if (j>=400 && j<=550 && i==350){
               // path_ziel.addRect(QRect(i, j, 50, 50));//zielone
            }kwadraciki=QRect(i,j,50,50);
            painter.drawRect(kwadraciki);
        }
    }
    painter.end();

    QWidget::paintEvent(event);
}
 void Gra::dodajGracza(Gracz* gracz){
     graczy.push_back(gracz);
 }
 void Gra::przygotujSieDoGry(){
    string kolor,im,nz;
   int dlugosc=graczy.size();
   if(0<dlugosc){
         pionki.push_back(vector<Pionek*>());
         kolor=graczy[0]->getKolor();
         im=graczy[0]->getImie();
         nz=graczy[0]->getNazwisko();
         ui->label_nr->setText("Gracz 1");
         ui->label_im->setText(QString::fromUtf8(im.c_str()));
         ui->label_nz->setText(QString::fromUtf8(nz.c_str()));
         for (int i=0;i<4;i++){
         pionki[0].push_back(new Pionek(kolor,i));
         }
         stworzPrzyciski(kolor,0);


      }
   if(1<dlugosc){ pionki.push_back(vector<Pionek*>());
         kolor=graczy[1]->getKolor();
         im=graczy[1]->getImie();
         nz=graczy[1]->getNazwisko();
         ui->label_nr_2->setText("Gracz 2");
         ui->label_im_2->setText(QString::fromUtf8(im.c_str()));
         ui->label_nz_2->setText(QString::fromUtf8(nz.c_str()));
         for (int i=0;i<4;i++){
         pionki[1].push_back(new Pionek(kolor,i));}
        stworzPrzyciski(kolor,1);

}
   if(2<dlugosc){ pionki.push_back(vector<Pionek*>());
         kolor=graczy[2]->getKolor();
         im=graczy[2]->getImie();
         nz=graczy[2]->getNazwisko();
         ui->label_nr_3->setText("Gracz 3");
         ui->label_im_3->setText(QString::fromUtf8(im.c_str()));
         ui->label_nz_3->setText(QString::fromUtf8(nz.c_str()));
         for (int i=0;i<4;i++){
            pionki[2].push_back(new Pionek(kolor,i));}
         stworzPrzyciski(kolor,2);
}
   if(3<dlugosc){ pionki.push_back(vector<Pionek*>());
         kolor=graczy[3]->getKolor();
         im=graczy[3]->getImie();
         nz=graczy[3]->getNazwisko();
         ui->label_nr_4->setText("Gracz 4");
         ui->label_im_4->setText(QString::fromUtf8(im.c_str()));
         ui->label_nz_4->setText(QString::fromUtf8(nz.c_str()));
         for (int i=0;i<4;i++){
            pionki[3].push_back(new Pionek(kolor,i));
         }
         stworzPrzyciski(kolor,3);
}


 }
void Gra::stworzPrzyciski(string kolor,int n){
    QPalette* palette1 = new QPalette();
    if  (kolor=="czerwony"){
        przyciski.push_back(vector<QPushButton*>());
        for (int i=0;i<4;i++){
             QPushButton *m_button;
             m_button=new QPushButton("", this) ;
             przyciski[n].push_back(m_button);
             palette1->setColor(QPalette::Button,Qt::red);
             m_button->setGeometry(QRect(QPoint( pionki[n][i]->get_X(),pionki[n][i]->get_Y()),QSize(50, 50)));
             connect(m_button, SIGNAL (released()),&mapper, SLOT(map()));
             mapper.setMapping(m_button, i );
              connect(&mapper, SIGNAL(mapped(int )), this, SLOT(handleButton(int )));
             m_button->setPalette(*palette1);
             m_button->show();
        }
   }else if (kolor=="zielony"){
        przyciski.push_back(vector<QPushButton*>());
        for (int i=0;i<4;i++){//dane[0]=n;dane[1]=i;
             QPushButton *m_button;
             m_button=new QPushButton("", this) ;
             przyciski[n].push_back(m_button);
             palette1->setColor(QPalette::Button,Qt::green);
             m_button->setGeometry(QRect(QPoint( pionki[n][i]->get_X(),pionki[n][i]->get_Y()),QSize(50, 50)));
             connect(m_button, SIGNAL (released()),&mapper, SLOT(map()));
             mapper.setMapping(m_button, i );
              connect(&mapper, SIGNAL(mapped(int )), this, SLOT(handleButton(int )));
             m_button->setPalette(*palette1);
             m_button->show();}
    }else if (kolor=="niebieski"){
            przyciski.push_back(vector<QPushButton*>());
            for (int i=0;i<4;i++){//dane[0]=n;dane[1]=i;
                 QPushButton *m_button;
                 m_button=new QPushButton("", this) ;
                 przyciski[n].push_back(m_button);
                 palette1->setColor(QPalette::Button,Qt::blue);
                 m_button->setGeometry(QRect(QPoint( pionki[n][i]->get_X(),pionki[n][i]->get_Y()),QSize(50, 50)));
                 connect(m_button, SIGNAL (released()),&mapper, SLOT(map()));
                 mapper.setMapping(m_button, i );
                  connect(&mapper, SIGNAL(mapped(int )), this, SLOT(handleButton(int)));
                 m_button->setPalette(*palette1);
                 m_button->show();}
        }else if (kolor=="zolty"){
                przyciski.push_back(vector<QPushButton*>());
                for (int i=0;i<4;i++){
                     QPushButton *m_button;
                     m_button=new QPushButton("", this) ;
                     przyciski[n].push_back(m_button);
                     palette1->setColor(QPalette::Button,Qt::yellow);
                     m_button->setGeometry(QRect(QPoint( pionki[n][i]->get_X(),pionki[n][i]->get_Y()),QSize(50, 50)));
                     connect(m_button, SIGNAL (released()),&mapper, SLOT(map()));
                     mapper.setMapping(m_button, i );
                      connect(&mapper, SIGNAL(mapped(int )), this, SLOT(handleButton(int)));
                     m_button->setPalette(*palette1);
                     m_button->show();}
            }

}
void Gra::handleButton(int k){
        ui->pushButton->setVisible(true);
        ui->label_kom->setText("pionek "+QString::number(k+1)+" gracza "+QString::number(kolejka)+" przesuwa sie");


        if (pionki[kolejka-1][k]->get_wDomku()==true){
            pionki[kolejka-1][k]->wyjdzzDomu();pionki[kolejka-1][k]->set_wDomku(false);
            przyciski[kolejka-1][k]->setGeometry(QRect(QPoint( pionki[kolejka-1][k]->get_X(),pionki[kolejka-1][k]->get_Y()),QSize(50, 50)));

        }
        graczy[kolejka-1]->setMojaKolejka(false);

}
bool Gra::wszPionkiGWDomku(int n){
    for (int i=0;i<4;i++){
        if (pionki[n][i]->get_wDomku()==false){
            return false;
        }
    }
    return true;
}
void Gra::graj(int n){
    srand( time( NULL ) );
    int liczba;
        for( int x = 0; x < 3; x++ ){
            liczba =( std::rand() % 6 ) + 1;
            QMessageBox msgBox;
            msgBox.setText("Gracz "+QString::number(n+1)+" wylosowal "+QString::number(liczba));
            msgBox.exec();
            if (wszPionkiGWDomku(n)==false){
                    graczy[n]->dodajKrokow(graczy[n]->getIleKrokow() + liczba);
                    graczy[n]->setMojaKolejka(true);
                    ui->pushButton->setVisible(false);
                    break;
            } else{
                if ( liczba == 6 )
                {
                    liczba =( std::rand() % 6 ) + 1;
                    graczy[n]->dodajKrokow(graczy[n]->getIleKrokow() + liczba);
                    graczy[n]->setMojaKolejka(true);
                    msgBox.setText("Gracz "+QString::number(n+1)+"drugi raz wylosowal "+QString::number(liczba));
                    msgBox.exec();
                    if ( liczba == 6 )
                    {
                         liczba =( std::rand() % 6 ) + 1;
                         graczy[n]->dodajKrokow(graczy[n]->getIleKrokow() + liczba);
                         msgBox.setText(QString::number(n+1)+"trzeci raz wylosowal "+QString::number(liczba));
                         msgBox.exec();
                         //break;
                    }
                    msgBox.setText("Gracz "+QString::number(n+1)+": wskaz pion do przesuniecia ");
                    msgBox.exec();
                    ui->pushButton->setVisible(false);
                    break;
                    //return;
                }
            }
        }
}


void Gra::on_pushButton_clicked()
{
    ui->label_kom->setText("");
    if(kolejka>=graczy.size()){kolejka=0;}
    graj(kolejka);
    kolejka++;
}
