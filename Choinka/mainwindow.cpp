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
    QPainterPath path1, path2, path3, path4, path5;

    painter.begin(this);
    painter.setRenderHints(QPainter::Antialiasing);
    //painter.setPen(QColor("green");
    //static const int points1[] = { 200, 70, 170, 130, 230, 130 };
    static const int points2[] = { 200, 85, 140, 190, 270, 190 };
    static const int points3[] = { 160, 190, 110, 260, 300, 260, 250, 190 };
    static const int points4[] = { 130, 260, 80, 330, 330, 330, 280, 260 };
    static const int points5[] = { 100, 330, 50, 400, 380, 400, 310, 330 };

    QPolygon polygon1, polygon2, polygon3, polygon4, polygon5;
    QRect rect1 = QRect(185,400,30,30);
    QPoint el1, el2, el3, el4, el5, el6, el7, el8;

    //polygon1.setPoints(3, points1);
    polygon2.setPoints(3, points2);
    polygon3.setPoints(4, points3);
    polygon4.setPoints(4, points4);
    polygon5.setPoints(4, points5);

    //path1.addPolygon(polygon1);
    path1.addPolygon(polygon2);
    path1.addPolygon(polygon3);
    path1.addPolygon(polygon4);
    path1.addPolygon(polygon5);

    path2.addRect(rect1);

    painter.drawEllipse(QPointF(200,100),10,10);
    painter.drawEllipse(QPoint(150,200),10,10);
    painter.drawEllipse(QPoint(190, 250),10,10);
    painter.drawEllipse(QPoint(300,300),10,10);
    painter.drawEllipse(QPoint(360,390),10,10);
    painter.drawEllipse(QPoint(200,380),10,10);
    painter.drawEllipse(QPoint(110,380),10,10);
    painter.drawEllipse(QPoint(210,300),10,10);


    path3.addEllipse(QPointF(200,100),10,10);
    path4.addEllipse(QPoint(150,200),10,10);
    path5.addEllipse(QPoint(190, 250),10,10);
    path3.addEllipse(QPoint(300,300),10,10);
    path4.addEllipse(QPoint(360,390),10,10);
    path5.addEllipse(QPoint(200,380),10,10);
    path3.addEllipse(QPoint(110,380),10,10);
    path4.addEllipse(QPoint(210,300),10,10);

    painter.fillPath(path1, QBrush(QColor ("green")));
    painter.fillPath(path2, QBrush(QColor ("brown")));
    painter.fillPath(path3, QBrush(QColor ("blue")));
    painter.fillPath(path4, QBrush(QColor ("red")));
    painter.fillPath(path5, QBrush(QColor ("yellow")));

    painter.drawPolygon(polygon1);
    painter.drawPolygon(polygon2);
    painter.drawPolygon(polygon3);
    painter.drawPolygon(polygon4);
    painter.drawPolygon(polygon5);

    painter.setPen("red");
    painter.drawStaticText(150,50, QStaticText("Wesołych Świąt!"));

    //polygon.f
    //QRect rect = QRect(50,25,50,25);
    painter.drawRect(rect1);

    painter.end();
    QWidget::paintEvent(event);
}

MainWindow::~MainWindow()
{
    delete ui;
}
