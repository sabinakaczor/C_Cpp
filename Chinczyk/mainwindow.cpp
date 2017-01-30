#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "rejestracja.h"
#include "ui_rejestracja.h"
#include "QtGui"
#include <QMouseEvent>
#include <iostream>

using namespace std;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    clicked = false;
    started = false;
    ui->throw_die->setVisible(false);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    QPainterPath path1, path2, path3, path4;

    if(clicked) {
        painter.begin(this);
        painter.setRenderHints(QPainter::Antialiasing);

        //plansza 13x13 kwadraciki 30x30
        QRect plansza = QRect(50,50,390,390);
        painter.setPen(QColor("black"));
        painter.drawRect(plansza);
        QRect domek_czerwone, domek_niebieskie, domek_zolte, domek_zielone;
        domek_czerwone = QRect(50,50,150,150);
        domek_niebieskie = QRect(290,50,150,150);
        domek_zielone = QRect(50,290,150,150);
        domek_zolte = QRect(290,290,150,150);
        painter.drawRect(domek_czerwone);
        painter.drawRect(domek_niebieskie);
        painter.drawRect(domek_zielone);
        painter.drawRect(domek_zolte);

        vector<QRect> ellipses;
        //na górze
        for(int i=200;i<=260; i=i+30) {
            for(int j=50; j<=170; j=j+30) {
                painter.drawRect(QRect(i,j,30,30));
                ellipses.push_back(QRect(i,j,30,30));
                if ((j>50 && i==230)||(j==50 && i==260))
                    path1.addRect(QRect(i,j,30,30));
            }
        }

        //po lewej
        for(int i=200;i<=260; i=i+30) {
            for(int j=50; j<=170; j=j+30) {
                painter.drawRect(QRect(j,i,30,30));
                ellipses.push_back(QRect(j,i,30,30));
                if((j>50 && i==230)||(i==200 && j==50))
                    path2.addRect(QRect(j,i,30,30));
            }
        }

        // na dole
        for(int i=200;i<=260; i=i+30) {
            for(int j=50; j<=170; j=j+30) {
                painter.drawRect(QRect(i,j+240,30,30));
                ellipses.push_back(QRect(i,j+240,30,30));
                if ((j<170 && i==230) || (j==170 && i==200))
                    path3.addRect(QRect(i,j+240,30,30));
            }
        }

        //po prawej
        for(int i=200;i<=260; i=i+30) {
            for(int j=50; j<=170; j=j+30) {
                painter.drawRect(QRect(j+240,i,30,30));
                ellipses.push_back(QRect(j+240,i,30,30));
                if ((i==230 && j<170) || (i==260 && j==170))
                    path4.addRect(QRect(j+240,i,30,30));
            }
        }


        //4 kwadraty na srodku
        painter.drawRect(200,200,30,30);
        ellipses.push_back(QRect(200,200,30,30));
        painter.drawRect(200,260,30,30);
        ellipses.push_back(QRect(200,260,30,30));
        painter.drawRect(260,200,30,30);
        ellipses.push_back(QRect(260,200,30,30));
        painter.drawRect(260,260,30,30);
        ellipses.push_back(QRect(260,260,30,30));

        QPen pen0;
        pen0.setWidth(0);
        painter.setPen(Qt::NoPen);
        for(int i=0; i<ellipses.size(); ++i) {
            painter.drawEllipse(ellipses[i]);
        }
        QPen def;
        painter.setPen(def);

        //pionki czerwone
        painter.drawEllipse(QRect(80,80,30,30));
        painter.drawEllipse(QRect(140,80,30,30));
        painter.drawEllipse(QRect(80,140,30,30));
        painter.drawEllipse(QRect(140,140,30,30));

        path2.addEllipse(QRect(80,80,30,30));
        path2.addEllipse(QRect(140,80,30,30));
        path2.addEllipse(QRect(80,140,30,30));
        path2.addEllipse(QRect(140,140,30,30));

        //pionki zielone
        painter.drawEllipse(QRect(320,80,30,30));
        painter.drawEllipse(QRect(380,80,30,30));
        painter.drawEllipse(QRect(320,140,30,30));
        painter.drawEllipse(QRect(380,140,30,30));

        path1.addEllipse(QRect(320,80,30,30));
        path1.addEllipse(QRect(380,80,30,30));
        path1.addEllipse(QRect(320,140,30,30));
        path1.addEllipse(QRect(380,140,30,30));

        //pionki żółte
        painter.drawEllipse(QRect(80,320,30,30));
        painter.drawEllipse(QRect(80,380,30,30));
        painter.drawEllipse(QRect(140,320,30,30));
        painter.drawEllipse(QRect(140,380,30,30));

        path3.addEllipse(QRect(80,320,30,30));
        path3.addEllipse(QRect(80,380,30,30));
        path3.addEllipse(QRect(140,320,30,30));
        path3.addEllipse(QRect(140,380,30,30));

        //pionki niebieskie
        painter.drawEllipse(QRect(320,320,30,30));
        painter.drawEllipse(QRect(380,320,30,30));
        painter.drawEllipse(QRect(320,380,30,30));
        painter.drawEllipse(QRect(380,380,30,30));

        path4.addEllipse(QRect(320,320,30,30));
        path4.addEllipse(QRect(380,320,30,30));
        path4.addEllipse(QRect(320,380,30,30));
        path4.addEllipse(QRect(380,380,30,30));

        painter.fillPath(path1, QBrush(QColor (000,200,045,130))); //zielona
        painter.fillPath(path2, QBrush(QColor (245,064,033,130))); //czerwona
        painter.fillPath(path3, QBrush(QColor (255,255,000,130))); //żółta
        painter.fillPath(path4, QBrush(QColor (034,113,179,130))); //niebieska

        static const int points1[] = { 270,50, 280,50, 280,60, 285,60, 275,70, 265,60, 270,60 };
        QPolygon strzalka1;
        strzalka1.setPoints(7, points1);
        painter.drawPolygon(strzalka1);

        static const int points2[] = { 50,210, 60,210, 60,205, 70,215, 60,225, 60,220, 50,220 };
        QPolygon strzalka2;
        strzalka2.setPoints(7, points2);
        painter.drawPolygon(strzalka2);

        static const int points3[] = { 210,440, 220,440, 220,430, 225,430, 215,420, 205,430, 210,430 };
        QPolygon strzalka3;
        strzalka3.setPoints(7, points3);
        painter.drawPolygon(strzalka3);

        static const int points4[] = { 440,280, 430,280, 430,285, 420,275, 430,265, 430,270, 440,270 };
        QPolygon strzalka4;
        strzalka4.setPoints(7, points4);
        painter.drawPolygon(strzalka4);

        painter.end();
    }
    QWidget::paintEvent(event);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_button_start_clicked()
{

    if(!started) {
        started = true;
        Rejestracja *r = new Rejestracja(this);
        r->exec();
    }
    //r->show();

    clicked = !clicked;
    if(clicked) {
        ui->button_start->setText("Zakończ grę");
    } else {
        ui->button_start->setText("Rozpocznij grę");
        started = false;
    }

    update();
}

void MainWindow::mouseDoubleClickEvent ( QMouseEvent * event )
{
    if(event->button() == Qt::LeftButton)
    {
       QPoint pt = event->pos();
       //cout << "clicked x " << pt.x() << " y " << pt.y();
       handleMouseClick(pt.x(), pt.y());
    }
}

void MainWindow::handleMouseClick(int x, int y)
{
    //sprawdza czy czerwony
    if (x>80 && x<110 && y>80 && y<110)
    {
        cout << "clicked pionek czerwony " << x << " y " << y << "\n";
    }
    else if (x>140 && x<170 && y>80 && y<110)
    {
        cout << "clicked pionek czerwony " << x << " y " << y << "\n";
    }
    else if (x>80 && x<110 && y>140 && y<170)
    {
        cout << "clicked pionek czerwony " << x << " y " << y << "\n";
    }
    else if (x>140 && x<170 && y>140 && y<170)
    {
        cout << "clicked pionek czerwony " << x << " y " << y << "\n";
    }

    //sprawdza czy zielony
    if (x>320 && x<350 && y>80 && y<110)
    {
        cout << "clicked pionek zielony " << x << " y " << y << "\n";
    }
    else if (x>380 && x<410 && y>80 && y<110)
    {
        cout << "clicked pionek zielony " << x << " y " << y << "\n";
    }
    else if (x>320 && x<350 && y>140 && y<170)
    {
        cout << "clicked pionek zielony " << x << " y " << y << "\n";
    }
    else if (x>380 && x<410 && y>140 && y<170)
    {
        cout << "clicked pionek zielony " << x << " y " << y << "\n";
    }

    //sprawdza czy żółty
    if (x>80 && x<110 && y>320 && y<350)
    {
        cout << "clicked pionek żółty " << x << " y " << y << "\n";
    }
    else if (x>140 && x<170 && y>320 && y<350)
    {
        cout << "clicked pionek żółty " << x << " y " << y << "\n";
    }
    else if (x>80 && x<110 && y>380 && y<410)
    {
        cout << "clicked pionek żółty " << x << " y " << y << "\n";
    }
    else if (x>140 && x<170 && y>380 && y<410)
    {
        cout << "clicked pionek żółty " << x << " y " << y << "\n";
    }

    //sprawdza czy niebieski
    if (x>320 && x<350 && y>320 && y<350)
    {
        cout << "clicked pionek niebieski " << x << " y " << y << "\n";
    }
    else if (x>380 && x<410 && y>320 && y<350)
    {
        cout << "clicked pionek niebieski " << x << " y " << y << "\n";
    }
    else if (x>320 && x<350 && y>380 && y<410)
    {
        cout << "clicked pionek niebieski " << x << " y " << y << "\n";
    }
    else if (x>380 && x<410 && y>380 && y<410)
    {
        cout << "clicked pionek niebieski " << x << " y " << y << "\n";
    }





}


