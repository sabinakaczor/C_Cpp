#include "wektor.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
//include <cstdint>

using namespace std;

wektor::wektor()
{
   n = 0;
}

wektor::wektor(int a)
{
    n = a;
    srand (time(NULL));
    tab = new int[n];
    for(int i=0; i<n; ++i) {
        tab[i] = rand() % n;
    }
}

wektor::wektor(int a, int b)
{
   n = a;
   tab = new int[n];
   for(int i=0; i<n; ++i) {
        tab[i] = b;
    }
}

wektor::wektor(const wektor& w)
{
    cerr << "Konstruktor kopiujacy" << endl;
    //if(w.tab != nullptr) {
    //n = w.n;
    tab =  new int[sizeof w.tab + 1];
    for (int i=0; i<sizeof w.tab; ++i) {
        tab[i] = w.tab[i];
    }

    //memcpy(tab,w.tab,sizeof w.tab);
    //}
}

wektor& wektor::operator=(const wektor& w)
{
    if(this == &w) {
        return *this;
    }
    delete [] tab;
    //tab = nullptr;
    if(sizeof w.tab != 0) {
        tab = new int[sizeof w.tab + 1];
            for (int i=0; i<sizeof w.tab; ++i) {
            tab[i] = w.tab[i];
        }
    return *this;
    }
}

void wektor::wypisz()
{
    for(int i=0; i<n-1; ++i)
        cout << tab[i] << " ";
    cout << tab[n-1];
}

void wektor::zmien(int j, int k)
{
    tab[j] = k;
}

int wektor::zwroc_wartosc(int j)
{
    return tab[j];
}


