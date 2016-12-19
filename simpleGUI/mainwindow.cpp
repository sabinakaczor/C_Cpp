#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

int licznik;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    licznik ++;
    QString text = QString::number(licznik);

    ui -> label -> setText(text);
}
