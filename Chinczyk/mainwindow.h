#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>
#include <rejestracja.h>
#include <rozgrywka.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool clicked;
    bool started;
    void start_game(Rozgrywka *g);

private slots:
    void paintEvent(QPaintEvent *event);
    void on_button_start_clicked();
    void mouseDoubleClickEvent ( QMouseEvent * event );
    void handleMouseClick(int x, int y);

    void on_throw_die_clicked();

private:
    Ui::MainWindow *ui;
    Rejestracja *r;
    Rozgrywka *game;
};

#endif // MAINWINDOW_H
