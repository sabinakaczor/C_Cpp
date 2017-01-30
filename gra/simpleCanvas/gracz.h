#ifndef GRACZ_H
#define GRACZ_H
#include <string>
using namespace std;
class Gracz
{
public:
    Gracz(string imie,string nazwisko,string kolor);
    string getImie () ;
    string getNazwisko();
    string getKolor();
    bool getMojaKolejka();
    void setMojaKolejka(bool kol);
    int getIleKrokow();
    void dodajKrokow(int ile);
protected:
    string imie;
    string nazwisko;
    string kolor;
    bool kolejka=false;
    int ilekrokow=0;
};

#endif // GRACZ_H
