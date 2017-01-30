#ifndef REJESTRACJA_H
#define REJESTRACJA_H

#include <QDialog>
#include <vector>
#include "gracz.h"

namespace Ui {
class Rejestracja;
}

class Rejestracja : public QDialog
{
    Q_OBJECT

public:
    explicit Rejestracja(QWidget *parent = 0);
    ~Rejestracja();

private slots:
    void on_buttonBox_accepted();

    void on_setPlayersQty_clicked();


private:
    Ui::Rejestracja *ui;
    vector<Gracz*> players;
};

#endif // REJESTRACJA_H
