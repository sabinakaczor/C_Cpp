#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void paintEvent(QPaintEvent *event);

    void on_button_start_clicked();

private:
    Ui::MainWindow *ui;
    bool clicked;
};

#endif // MAINWINDOW_H
