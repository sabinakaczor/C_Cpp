#include "gracz.h"

Gracz::Gracz(string imie,string nazwisko,string kolor)
{
    this->imie=imie;
    this->nazwisko=nazwisko;
    this->kolor=kolor;

}

string Gracz:: getImie() {return imie;}
string Gracz ::getNazwisko(){return nazwisko;}
string Gracz:: getKolor(){return kolor;}
bool Gracz::getMojaKolejka(){return kolejka;}
void Gracz::setMojaKolejka(bool kol){this->kolejka=kol;}
int Gracz::getIleKrokow(){return ilekrokow;}
void Gracz::dodajKrokow(int ile){this->ilekrokow=ile;}
