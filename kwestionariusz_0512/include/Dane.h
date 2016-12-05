#ifndef DANE_H
#define DANE_H

#include <vector>
#include "Osoba.h"

using namespace std;

class Dane
{
    public:
        Dane();
        ~Dane();
        void zapiszOsoby();

    private:
        vector<Osoba*> listaOsob;
        void wyswietlOsoby() const;
        void pobierzDane();
};

#endif // DANE_H
