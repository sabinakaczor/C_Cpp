#ifndef OSOBA_H
#define OSOBA_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


class Osoba
{
    public:
        Osoba();
        Osoba(string name, string lastName, string dateOfBirth, string address, string telNumber, string email);
        ~Osoba();
        void pobierzDaneOsoby();
        void wyswietlDaneOsoby() const;

    private:
        string name;
        string lastName;
        string email;
        string telNumber;
        string address;
        string dateOfBirth;
        void zapiszOsDoPliku() const;
};

#endif // OSOBA_H
