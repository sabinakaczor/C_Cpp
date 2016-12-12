#include <iostream>
#include "wektor.h"

using namespace std;

int main()
{
    wektor *w = new wektor(5);
    cout << "\nElementy w: ";
    w->wypisz();
    wektor *w1;
    w1 = w;
    cout << "\nWartość trzeciego elementu: " << w->zwroc_wartosc(2);
    w->zmien(2,0);
    cout << "\nWartość trzeciego elementu po zmianie: " << w->zwroc_wartosc(2);
    cout << "\nElementy w: ";
    w->wypisz();
    cout << "\nElementy w1: ";
    w1->wypisz();
    wektor *w2 = new wektor(5,2);
    cout << "\nElementy w2: ";
    w2->wypisz();
    return 0;
}
