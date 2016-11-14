#include <iostream>

using namespace std;

int main()
{
    //strumień wyjściowy
    cout << "Witaj!" << endl;

    string imie = "Darek";
    cout << "Witaj " << imie << endl;

    int wiek = 18;
    cout << "Masz " << wiek << " lat." << endl;

    //strumień wejściowy
    int liczba;
    cout << "Podaj swoją ulubioną liczbę:" << endl;
    cin >> liczba;
    cout << "Twoja ulubiona liczba to " << liczba << endl;

    //instrukcje sterujące

    int x;
    bool niepelnoletni;

    cout << "Ile masz lat?" << endl;
    cin >> x;

    niepelnoletni = (x < 18);

    if (niepelnoletni == true)
        cout << "Jesteś niepełnoletni" << endl;
    else
        cout << "Jesteś pełnoletni" << endl;

    int okres;
    if (niepelnoletni == true)
    {
        okres = 18 - x;
        cout << "Jesteś niepełnoletni" << endl;

        if (okres == 1)
            cout << "Do pełnoletności został Ci " << okres << " rok." << endl;
        else
            if ((okres > 1) && (okres < 5))
                cout << "Do pełnoletności zostały Ci " << okres << " lata." << endl;
            else
                cout << "Do pełnoletności zostało Ci " << okres << " lat." << endl;
    }
    else
        cout << "Jesteś pełnoletni" << endl;

    int org_x = x;
    while (niepelnoletni)
    {
        cout << "Wiek: " << x << endl;
        x++;
        niepelnoletni = (x < 18);
    }
    cout << endl;
    x = org_x;
    do
    {
        cout << "Wiek: " << x << endl;
        x++;
        niepelnoletni = (x < 18);
    }
    while (niepelnoletni);

    cout << endl;

    for (int i = 0; i < 10; i++)
        cout << i << endl;

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue; // program przechodzi dalej, ale nie konczy dzialania
        cout << i << endl;
    }

    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            break; // program konczy dzialanie
        cout << i << endl;
    }

    int opcja = 1;
    switch (opcja)
    {
        case 1:
            cout << "Wybrałeś pierwszą opcję. Wygrałeś 100 zł";
            break;
        case 2:
            cout << "Wybrałeś drugą opcję. Wygrałeś 50 zł";
            break;
        default:
            cout << "Brak nagród!";
    }

    return 0;
}
