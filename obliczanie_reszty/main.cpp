#include <iostream>
#include <math.h>

using namespace std;


float round1(float f) {
    float f1 = floor(f * 5 + 0.5) / 5;
    //cout << trunc(f1*100)/100 << endl;
    //return (f1*100)/100 - (f1 % 100);
    return f1;

}

float r(float f) {
    double f1 = round(f*100)/100;
    double r = f1 % 0.01;
    return f1 - r;
}

int main()
{
    /*float wartosc, wplata;
    float ile200 = 0;
    float ile100 = 0;
    float ile50 = 0;
    float ile20 = 0;
    float ile10 = 0;
    float ile5 = 0;
    float ile2 = 0;
    float ile1 = 0;
    float ile50gr = 0;
    float ile20gr = 0;
    float ile10gr = 0;
    float ile5gr = 0;
    float ile2gr = 0;
    float ile1gr = 0;
    cout << "Podaj wartość rachunku ";
    cin >> wartosc;
    cout << "Podaj wartość wpłaty ";
    cin >> wplata;
    float reszta = wplata - wartosc;
    float temp = reszta;
    if (temp >= 200)
    {
        ile200 = floor(temp/200);
        temp -= ile200 * 200;
    }
    if (temp >= 100)
    {
        ile100 = floor(temp/100);
        temp -= ile100 * 100;
    }
    if (temp >= 50)
    {
        ile50 = floor(temp/50);
        temp -= ile50 * 50;
    }
    if (temp >= 20)
    {
        ile20 = floor(temp/20);
        temp -= ile20 * 20;
    }
    if (temp >= 10)
    {
        ile10 = floor(temp/10);
        temp -= ile10 * 10;
    }
    if (temp >= 5)
    {
        ile5 = floor(temp/5);
        temp -= ile5 * 5;
    }
    if (temp >= 2)
    {
        ile2 = floor(temp/2);
        temp -= ile2 * 2;
    }
    if (temp >= 1)
    {
        ile1 = floor(temp/1);
        temp -= ile1;
    }
    if (temp >= 0.5)
    {
        ile50gr = floor(temp/0.5);
        temp -= ile50gr * 0.5;
    }
     if (temp >= 0.2)
    {
        ile20gr = floor(temp/0.2);
        temp -= ile20gr * 0.2;
    }
     if (temp >= 0.1)
    {
        ile10gr = floor(temp/0.1);
        temp -= ile10gr * 0.1;
    }
     if (temp >= 0.05)
    {
        ile5gr = floor(temp/0.05);
        temp -= ile5gr * 0.05;
        float temp1 = round1(temp*100)/100;
        //cout << round (1.9);
        //cout << temp1;
    }
     if (temp >= 0.02)
    {
        cout << temp;
        ile2gr = floor(temp/0.02);
        temp -= ile2gr * 0.02;
    }
     if (temp >= 0.01)
    {
        ile1gr = floor(temp/0.01);
        temp -= ile1gr * 0.01;
    }

    cout << "Reszta ogółem: " << reszta << endl;
    cout << "200 zł: " << ile200 << endl;
    cout << "100 zł: " << ile100 << endl;
    cout << "50 zł: " << ile50 << endl;
    cout << "20 zł: " << ile20 << endl;
    cout << "10 zł: " << ile10 << endl;
    cout << "5zł: " << ile5 << endl;
    cout << "2zł: " << ile2 << endl;
    cout << "1zł: " << ile1 << endl;
    cout << "50gr: " << ile50gr << endl;
    cout << "20gr: " << ile20gr << endl;
    cout << "10gr: " << ile10gr << endl;
    cout << "5gr: " << ile5gr << endl;
    cout << "2gr: " << ile2gr << endl;
    cout << "1gr: " << ile1gr << endl;*/

    cout << r(643.4555) << endl;



    return 0;
}
