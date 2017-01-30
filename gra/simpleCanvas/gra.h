#ifndef GRA_H
#define GRA_H
#include "gracz.h"
#include <vector>
#include <QDialog>
#include "rejestracjagraczy.h"
#include "pionek.h"
#include <QPushButton>
#include <QSignalMapper>
namespace Ui {
class Gra;
}

class Gra : public QDialog
{
    Q_OBJECT

public:
    void dodajGracza(Gracz* gracz);
    void przygotujSieDoGry();
    void graj(int n);
    explicit Gra(QWidget *parent = 0);
    ~Gra();
private slots:

    void paintEvent(QPaintEvent *event);

    void on_pushButton_clicked();

    void handleButton(int i);
private:
    Ui::Gra *ui;
    std::vector<Gracz*> graczy;
    std::vector< vector<Pionek*> > pionki;
    std::vector< vector<QPushButton*> > przyciski;
    QSignalMapper mapper;
 protected:
    void stworzPrzyciski(string kolor,int n);
    bool wszPionkiGWDomku(int n);
    int kolejka=0;

};

#endif // GRA_H
