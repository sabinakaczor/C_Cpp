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

    void on_start_button_clicked();
    void on_finish_button_clicked();

private:
    Ui::MainWindow *ui;
  //  bool m_draw;
  //  bool fr_wid;
};

#endif // MAINWINDOW_H
