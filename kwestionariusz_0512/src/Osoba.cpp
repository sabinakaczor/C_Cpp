#include "Osoba.h"

using namespace std;

Osoba::Osoba() {}

Osoba::Osoba(string name, string lastName, string dateOfBirth, string address, string telNumber, string email) {
        this->name = name;
        this->lastName = lastName;
        this->dateOfBirth = dateOfBirth;
        this->address = address;
        this->telNumber = telNumber;
        this->email = email;
}

void Osoba::pobierzDaneOsoby() {
        cout << "Podaj imię\n";
        cin >> this->name;
        cout << "Podaj nazwisko\n";
        cin >> this->lastName;
        cout << "Podaj datę urodzenia\n";
        cin >> this->dateOfBirth;
        cout << "Podaj adres zamieszkania\n";
        cin >> this->address;
        cout << "Podaj numer telefonu\n";
        cin >> this->telNumber;
        cout << "Podaj adres email\n";
        cin >> this->email;
        cout << "\n";
        this->zapiszOsDoPliku();
}

void Osoba::wyswietlDaneOsoby() const{
        cout << "Imie i nazwisko: " << this->name << " " << this->lastName << "\n";
        cout <<"Data urodzenia: " << this->dateOfBirth << "\n";
        cout <<"Adres: " << this->address << "\n";
        cout <<"Numer telefonu: " << this->telNumber << "\n";
        cout <<"Email: " << this->email << "\n";
}


void Osoba::zapiszOsDoPliku() const{
   fstream f;
   f.open("osoby.txt", ios::app);
   if(f.is_open()) {
        f << this->name << "\n";
        f << this->lastName << "\n";
        f << this->dateOfBirth << "\n";
        f << this->address << "\n";
        f << this->telNumber << "\n";
        f << this->email << "\n";
        f << "\n";
        f.close();
   } else {
        cout << "Błąd zapisu!";
   }
}

