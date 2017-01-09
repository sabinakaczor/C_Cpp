#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGui"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    QPainterPath path1, path2, path3, path4;

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

    //na górze
    for(int i=200;i<=260; i=i+30) {
        for(int j=50; j<=170; j=j+30) {
            painter.drawRect(QRect(i,j,30,30));
            if ((j>50 && i==230)||(j==50 && i==260))
                path1.addRect(QRect(i,j,30,30));
        }
    }

    //po lewej
    for(int i=200;i<=260; i=i+30) {
        for(int j=50; j<=170; j=j+30) {
            painter.drawRect(QRect(j,i,30,30));
            if((j>50 && i==230)||(i==200 && j==50))
                path2.addRect(QRect(j,i,30,30));
        }
    }

    // na dole
    for(int i=200;i<=260; i=i+30) {
        for(int j=50; j<=170; j=j+30) {
            painter.drawRect(QRect(i,j+240,30,30));
            if ((j<170 && i==230) || (j==170 && i==200))
                path3.addRect(QRect(i,j+240,30,30));
        }
    }

    //po prawej
    for(int i=200;i<=260; i=i+30) {
        for(int j=50; j<=170; j=j+30) {
            painter.drawRect(QRect(j+240,i,30,30));
            if ((i==230 && j<170) || (i==260 && j==170))
                path4.addRect(QRect(j+240,i,30,30));
        }
    }


    //4 kwadraty na srodku
    painter.drawRect(200,200,30,30);
    painter.drawRect(200,260,30,30);
    painter.drawRect(260,200,30,30);
    painter.drawRect(260,260,30,30);

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

    painter.end();
    QWidget::paintEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}