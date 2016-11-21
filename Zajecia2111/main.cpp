#include <iostream>

using namespace std;

int main()
{
    //operatory arytmetyczne
    int a = 5;
    int b = 7;
    cout << a + b << endl; //dodawanie
    cout << a - b << endl; // odejmowanie
    cout << a * b << endl; //mnozenie
    cout << a / b << endl; //dzielenie

    cout << a % b << endl; //reszta z dzielenia
    cout << endl;

    //operatory inkrementacji i dekrementracji
    int i = 5;
    int j = 5;
    int k = 5;
    int l = 5;

    cout << j++ << endl;
    cout << j-- << endl;
    cout << ++k << endl;
    cout << --l << endl;

    cout << endl;

    cout << j << endl;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;

    cout << endl;

    //operatory logiczne
    int z1 = 4;
    int z2 = 8;
    cout << (z1 < z2) << endl;
    cout << (z1 <= z2) << endl;
    cout << (z1 > z2) << endl;
    cout << (z1 >= z2) << endl;
    cout << (z1 == z2) << endl;
    cout << (z1 != z2) << endl;

    cout << endl;

    cout << ((z1==4) || (z2==2)) << endl; //alternatywa
    cout << ((z1==4) && (z2==8)) << endl; //koniunkcja
    cout << !z1 << endl; //negacja

    //operatory bitowe
    short int b1 = 0x0f0;
    short int b2 = 0x0ff;
    short int w1;
    short int w2;
    short int w3;
    short int w4;
    short int w5;
    short int w6;

    w1 = b1 << 2; //przesunięcie bitowe o 2 miejsca w lewo
    cout << w1 << endl;

    w2 = b1 >> 4; //przesunięcie bitowe o 2 miejsca w prawo
    cout << w2 << endl;

    w3 = b1 & b2; //iloczyn bitowy
    cout << w3 << endl;

    w4 = b1 | b2; //suma bitowa
    cout << w4 << endl;

    w4 = ~b1; //negacja bitów
    cout << w4 << endl;

    w5 = b1 ^ b2; //różnica symetryczna (XOR) bitów
    cout << w5 << endl;

    //pozostałe operatory przypisania

    short int dz = 12;
    cout << (dz += 2) << endl; //dz = dz + 2;
    cout << (dz -= 2) << endl; //dz = dz - 2;
    cout << (dz *= 2) << endl; //dz = dz * 2;
    cout << (dz /= 2) << endl; //dz = dz / 2;
    cout << (dz %= 2) << endl; //dz = dz % 2;
    cout << (dz >>= 2) << endl; //dz = dz >> 2;
    cout << (dz <<= 2) << endl; //dz = dz << 2;
    cout << (dz &= 2) << endl; //dz = dz & 2;
    cout << (dz |= 2) << endl; //dz = dz | 2;
    cout << (dz ^= 2) << endl; //dz = dz ^ 2;

    //wyrażenia warunkowe
    int m = 5;
    cout << ((m>5) ? "Tak" : "Nie") << endl;


    //tablice jednowymiarowe
    int *tab;
    tab = new int[10];
    delete tab; //likwidacja tablicy

    //tablice wielowymiarowe
    //int *tab1;
    int ile;
    ile = 5;
    int (*tab1) [10] = new int[ile][10]; //tylko wymiar "najbardziej
    //z prawej" może być dynamiczny
    delete tab1;



    return 0;
}
