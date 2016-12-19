#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QtGui"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_draw = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter;
    if (m_draw)
    {
        painter.begin(this);
        painter.setRenderHints(QPainter::Antialiasing);
        painter.setPen(Qt::black);
        QRect rect = QRect(50,25,50,25);
        painter.drawRect(rect);
        painter.end();
    }
    QWidget::paintEvent(event);
}

void MainWindow::on_pushButton_clicked()
{
    m_draw = !m_draw;
    update();
}
