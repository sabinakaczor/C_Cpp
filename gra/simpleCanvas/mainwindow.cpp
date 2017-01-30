#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rejestracjagraczy.h"
#include "QtGui"

#include <QPainter>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Gra w Chinczyka");
   // m_draw = false;
   // fr_wid=false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
   /* QPainter painter;
     if (m_draw)
    {


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
                }kwadraciki=QRect(i,j,50,50);
                painter.drawRect(kwadraciki);
            }
        }
        for (i=300;i<450;i=i+50){
            for (j=100;j<650;j=j+50){

                if (j>=150 && j<=300 && i==350){
                    path_zolte.addRect(QRect(i, j, 50, 50));//zolte
                }
                if (j>=400 && j<=550 && i==350){
                    path_ziel.addRect(QRect(i, j, 50, 50));//zielone
                }kwadraciki=QRect(i,j,50,50);
                painter.drawRect(kwadraciki);
            }
        }
    painter.drawEllipse(QRect(125,125,50,50));
    painter.drawEllipse(QRect(125,225,50,50));
    painter.drawEllipse(QRect(225,125,50,50));
    painter.drawEllipse(QRect(225,225,50,50));
    //kolka niebieskie
    path_nieb.addEllipse(QRect(125,125,50,50));
    path_nieb.addEllipse(QRect(125,225,50,50));
    path_nieb.addEllipse(QRect(225,125,50,50));
    path_nieb.addEllipse(QRect(225,225,50,50));

    painter.drawEllipse(QRect(475,125,50,50));
    painter.drawEllipse(QRect(575,125,50,50));
    painter.drawEllipse(QRect(475,225,50,50));
    painter.drawEllipse(QRect(575,225,50,50));
    //kolka zolte
    path_zolte.addEllipse(QRect(475,125,50,50));
    path_zolte.addEllipse(QRect(575,125,50,50));
    path_zolte.addEllipse(QRect(475,225,50,50));
    path_zolte.addEllipse(QRect(575,225,50,50));

    painter.drawEllipse(QRect(125,475,50,50));
    painter.drawEllipse(QRect(225,575,50,50));
    painter.drawEllipse(QRect(125,575,50,50));
    painter.drawEllipse(QRect(225,475,50,50));
    //kolka zielone
    path_ziel.addEllipse(QRect(125,475,50,50));
    path_ziel.addEllipse(QRect(225,575,50,50));
    path_ziel.addEllipse(QRect(125,575,50,50));
    path_ziel.addEllipse(QRect(225,475,50,50));

    painter.drawEllipse(QRect(475,475,50,50));
    painter.drawEllipse(QRect(475,575,50,50));
    painter.drawEllipse(QRect(575,475,50,50));
    painter.drawEllipse(QRect(575,575,50,50));
    //kolka czerw
    path_czerw.addEllipse(QRect(475,475,50,50));
    path_czerw.addEllipse(QRect(475,575,50,50));
    path_czerw.addEllipse(QRect(575,475,50,50));
    path_czerw.addEllipse(QRect(575,575,50,50));


    //koloryzuj

    painter.fillPath(path_ziel, QBrush(QColor (000,143,057,100))); //zielona
    painter.fillPath(path_czerw, QBrush(QColor (248,000,000,100))); //czerwona
    painter.fillPath(path_zolte, QBrush(QColor (237,255,033,100))); //żółta
    painter.fillPath(path_nieb, QBrush(QColor (034,113,179,100))); //niebieska
    painter.end();
    }
    QWidget::paintEvent(event);*/
}

/*void MainWindow::on_pushButton_clicked()
{
   // m_draw = !m_draw;
   // fr_wid=!fr_wid;
    ui->frame->setVisible(true);
    ui->frame_2->setVisible(false);
    fr_wid=true;
    update();

}

void MainWindow::on_pushButton_4_clicked()
{
     m_draw = !m_draw;
     ui->frame->setVisible(false);

     update();
}

void MainWindow::on_pushButton_3_clicked()
{

}*/

void MainWindow::on_start_button_clicked()
{
RejestracjaGraczy rj(this);
rj.setWindowTitle("Gra w Chinczyka/Rejestracja graczy");
rj.exec();
}



void MainWindow::on_finish_button_clicked()
{

}
