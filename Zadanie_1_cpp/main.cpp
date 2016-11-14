//obliczanie pierwiastków równania kwadratowego

#include <iostream>
#include <math.h>

using namespace std;

bool popr(float a, float b, float c, float x) {
    return (a*x*x + b*x + c == 0);
}
int main()
{
    float a, b, c;
    float x, x1, x2;
    int ileR;
    cout << "Podaj a" << endl;
    cin >> a;
    cout << "Podaj b" << endl;
    cin >> b;
    cout << "Podaj c" << endl;
    cin >> c;

    /*cout << "Rozwiązuję równanie ";
    if (a > 0)
        cout << a << "x^2 ";
    if (b > 0)
        if (a == 0)
            cout << "+";
        cout << b << "x ";
    if (c > 0)
        cout << "+" << c;
    cout << endl;*/
    float delta = b*b - 4*a*c;
    if (delta > 0)
    {
        ileR = 2;
        float pierw = sqrt(delta);
        x1 = -b - pierw/ 2*a;
        x2 = -b + pierw/ 2*a;
        cout << "Pierwiastkami tego równania są " << x1 << " i " << x2 << "."<< endl;
    }
    else if (delta == 0)
    {
        ileR = 1;
        x = -b / 2*a;
        cout << "Rozwiązaniem tego równania jest " << x << "." << endl;
    }
    else
    {
        ileR = 0;
        cout << "Brak rozwiązań rzeczywistych podanego równania" << endl;
    }

    cout << "Czy chcesz sprawdzić poprawność wyniku? [T/N]" << endl;
    char d;
    cin >> d;
    while (d != 'T' && d != 'N')
    {
        cout << "Wpisz T lub N!" << endl;
        cin >> d;
    }

    if (d == 'T')
    {
        if (ileR == 2)
        {
            if (popr(a,b,c,x1) && popr(a,b,c,x2))
                cout << "Rozwiązanie jest poprawne" << endl;
            else
                cout << "Błąd!" << endl;
        }
        else if (ileR == 1)
            if (popr(a,b,c,x))
                cout << "Rozwiązanie jest poprawne" << endl;
            else
                cout << "Błąd!" << endl;
    }


    return 0;
}
