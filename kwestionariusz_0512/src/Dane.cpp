#include "Dane.h"

using namespace std;

Dane::Dane() {
    this->pobierzDane();
}

void Dane::zapiszOsoby() {
    int ile;
    cout << "Ile osób chcesz zapisać?\n";
    cin >> ile;
    for(int i = 0; i < ile; i++) {
        cout << "Pobieram dane " << i+1 << ". osoby\n";
        Osoba *os = new Osoba();
        os->pobierzDaneOsoby();
        this->listaOsob.push_back(os);
    }
    this->wyswietlOsoby();
}

void Dane::wyswietlOsoby() const{
    cout << "Zapisane osoby:\n";
    for (int i=0; i < this->listaOsob.size(); ++i) {
        cout << "\n" << i+1 << ". osoba:\n";
        this->listaOsob[i]->wyswietlDaneOsoby();
        cout << "\n";
    }
}

void Dane::pobierzDane() {
    fstream f;
    f.open("osoby.txt",ios::in);

    string name, lastName, dateOfBirth, address, telNumber, email;
    if(f.is_open()) {
        while(!f.eof()) {
            f >> name;
            f >> lastName;
            f >> dateOfBirth;
            f >> address;
            f >> telNumber;
            f >> email;

            Osoba *os = new Osoba(name, lastName, dateOfBirth, address, telNumber, email);
            if(!f.eof())
                this->listaOsob.push_back(os);
        }
        this->wyswietlOsoby();
    }
}
