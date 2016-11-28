#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

class Osoba {
public:

    Osoba() {}
    Osoba(string name, string lastName, string dateOfBirth, string address, string telNumber, string email) {
        this->name = name;
        this->lastName = lastName;
        this->dateOfBirth = dateOfBirth;
        this->address = address;
        this->telNumber = telNumber;
        this->email = email;
    }
    void przypiszDane() {
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
        this->zapiszDoPliku();
    }
    void wyswietlDane() {
        cout << "Imie i nazwisko: " << this->name << " " << this->lastName << "\n";
        cout <<"Data urodzenia: " << this->dateOfBirth << "\n";
        cout <<"Adres: " << this->address << "\n";
        cout <<"Numer telefonu: " << this->telNumber << "\n";
        cout <<"Email: " << this->email << "\n";
    }


private:
    string name;
    string lastName;
    string email;
    string telNumber;
    string address;
    string dateOfBirth;
    void zapiszDoPliku() {
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
};

class Dane{

public:
    Dane() {
        this->pobierzDane();
    }

    void zapiszOsoby() {
        int ile;
        cout << "Ile osób chcesz zapisać?\n";
        cin >> ile;
        for(int i = 0; i < ile; i++) {
            cout << "Pobieram dane " << i+1 << ". osoby\n";
            Osoba *os = new Osoba();
            os->przypiszDane();
            this->listaOsob.push_back(os);
        }
        this->wyswietlOsoby();
    }

private:

    vector<Osoba*> listaOsob;

    void wyswietlOsoby() {
        cout << "Zapisane osoby:\n";
        for (int i=0; i < this->listaOsob.size(); ++i) {
            cout << "\n" << i+1 << ". osoba:\n";
            this->listaOsob[i]->wyswietlDane();
            cout << "\n";
        }
    }

    void pobierzDane() {
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
};


int main()
{
    Dane *dane = new Dane();
    dane->zapiszOsoby();

    return 0;
}
