#include <iostream>
#include <string>

using namespace std;

enum month
{
    styczen = 1,
    luty = 2,
    marzec = 3,
    kwiecien = 4,
    maj = 5,
    czerwiec = 6,
    lipiec = 7,
    sierpien = 8,
    wrzesien = 9,
    pazdziernik = 10,
    listopad = 11,
    grudzien = 12
};

enum day_of_the_week
    {
        poniedzialek = 1,
        wtorek = 2,
        sroda = 3,
        czwartek = 4,
        piatek = 5,
        sobota = 6,
        niedziela = 7
    };



int main()
{
    //dd-mm-rrrr komentarz
    //zapisywane w tablicy
    //typ enum


    int y, wd;
    month mth;
    day_of_the_week dw;
    string kom;
    int d, m;
    string tab[10];

    for (int i = 0; i < 10; ++i) {
        cout << "Dzieñ tygodnia: " << endl;
        cin >> d;
        cout << "Dzieñ: " << endl;
        cin >> tab[1];
        cout << "Miesi¹c: " << endl;
        cin >> m;
        cout << "Rok: " << endl;
        cin >> tab[3];
        cout << "Komentarz: " << endl;
        cin >> tab[4];

        switch(d) {
        case 1:
            tab[0] = "poniedzialek";
        case 2:
            tab[0] = "wtorek";
        case 3:
            tab[0] = "sroda";
        case 4:
            tab[0] = "czwartek";
        case 5:
            tab[0] = "piatek";
        case 6:
            tab[0] = "sobota";
        case 7:
            tab[0] = "niedziela";
        }

        switch(m) {
        case 1:
            tab[2] = "stycznia";
        case 2:
            tab[2] = "lutego";
        case 3:
            tab[2] = "marca";
        case 4:
            tab[2] = "kwietnia";
        case 5:
            tab[2] = "maja";
        case 6:
            tab[2] = "czerwca";
        case 7:
            tab[2] = "lipca";
        case 8:
            tab[2] = "sierpnia";
        case 9:
            tab[2] = "wrzesnia";
        case 10:
            tab[2] = "pazdziernika";
        case 11:
            tab[2] = "listopada";
        case 12:
            tab[2] = "grudnia";
        }

        cout << tab[0] << " " << tab[1] << "-" << tab[2] << "-" << tab[3] << "r. " << tab[4] << endl;
    }



    //cout << dw << endl;









    return 0;
}
