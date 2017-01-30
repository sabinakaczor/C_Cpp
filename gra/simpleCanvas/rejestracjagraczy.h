#ifndef REJESTRACJAGRACZY_H
#define REJESTRACJAGRACZY_H
#include "gracz.h"
#include <QDialog>

namespace Ui {
class RejestracjaGraczy;
}

class RejestracjaGraczy : public QDialog
{
    Q_OBJECT

public:
    explicit RejestracjaGraczy(QWidget *parent = 0);
    ~RejestracjaGraczy();

private slots:
    void on_add_player_clicked();

    void on_start_game_clicked();

private:
    Ui::RejestracjaGraczy *ui;
    enum Columna{
        IMIE, NAZWISKO, KOLOR
    };

};

#endif // REJESTRACJAGRACZY_H
