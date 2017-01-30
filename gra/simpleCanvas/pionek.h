#ifndef PIONEK_H
#define PIONEK_H
#include <string>
#include <QPushButton>
using namespace std;
class Pionek :public QPushButton
{
public:
    Pionek( string kolordomka,int nr);
    string get_Kolor();
    int get_X();
    int get_Y();
    void set_X(int x);
    void set_Y(int y);
    int getNr();
    void setNr(int nrr);
    bool get_wDomku();
    void set_wDomku(bool wD);
    void wyjdzzDomu();
protected:
    int x;
    int y;
    int nr;
    string kolordomka;
    bool wDomku;
    void setwDomek();

};

#endif // PIONEK_H
