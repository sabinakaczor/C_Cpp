#include <iostream>

using namespace std;

int main()
{
    // typy fundamentalne
    //liczby ca�kowite

    short int a1; //short
    int a2;
    long int a3; //long

    //typ do przechowywania znak�w alfanumerycznych
    char b;

    //ze znakiem i bez znaku
    signed int c1; //int e;
    unsigned int c2;

    //typ mogacy przechowywa� rozszerzony zestaw znak�w alfanumerycznych
    wchar_t d;

    //typy reprezentuj�ce liczby zmiennoprzecinkowe
    float e1;
    double e2;
    long double e3;

    //typ logiczny
    bool fl;

    //sta�e


    //sta�e liczbowe
    //system dziesi�tny
    int dz = 10;

    //system osemkowy
    int o = 010;

    //system szesnastkowy
    int h = 0x10;

    //liczba typu long
    cout << 20L << endl;

    //liczba typu unsigned
    cout << 20u << endl;

    //liczba typu unsigned long
    cout << 20uL << endl;

    //sta�e reprezentuj�ce liczby zmiennoprzecinkowe
    cout << 12.3 << endl;

    // notacja wyk�adnicza e
    double ne = 4e5;

    float zm = 4.5f; //4.5F

    //sta�e znakowe
    char znak = 'c';

    //sta�e znakowe typu wchar_t
    wchar_t litera = L'a'; //L'jaka� litera np z innego alfabetu'
    cout << litera << endl;

    //sta�e tekstowe
    string napis = "Ala ma kota";

    //typy z�o�one

    //tablice
    int tab[10];

    //wska�niki
    float *p;

    //funkcje
    int wylicz();

    //przydomek const
    const double pi = 3.14;

    //przydomek register
    register int i; //info dla kompilatora by przechowa� t� zmienn�
                    //w rejestrze (szybki dost�p do zmiennej)

    //przydomek volatile
    volatile int m; //kompilator ma uwa�a� na ta zmienna (obiekt)
                    //z uwagi na jej zmienny charakter

    //instrukcja typedef
    typedef int cena; //nadanie dodatkowej nazwy zmiennej
    cena x;

    //typy wyliczeniowe enum
    enum miesiac
    {
        styczen = 0,
        luty = 1,
        marzec = 2
    };

    miesiac miech;
    miech = styczen;
    cout << miech << endl;





    return 0;
}
