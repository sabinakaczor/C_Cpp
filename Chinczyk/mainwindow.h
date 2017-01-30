#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMouseEvent>

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

private slots:
    void paintEvent(QPaintEvent *event);
    void on_button_start_clicked();
    void mouseDoubleClickEvent ( QMouseEvent * event );
    void handleMouseClick(int x, int y);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
