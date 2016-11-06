#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>

//funkcje

void wyswietl(char napis [10])
{
    puts(napis);
}


int suma (int a, int b); //prototyp funkcji, deklaracja funkcji

int roznica (int a, int b) //definicja funkcji
{
    return a-b;
}

int iloczyn (int a, ...)
{
    va_list arg; //specjalny typ danych, w ktorych przechowywane beda arg
    int mnoz=1, t;
    va_start (arg,a); //inicjuje arg
    for(t=a;t;t=va_arg(arg,int)){//makro va_arg odczytuje kolejne arg
        mnoz *=t;               //i przeksztalca je do odpowiedniego typu danych
    }
    va_end(arg); //makro obowiazkowe
    return mnoz;
}
int suma (int a, int b){
    return a+b;
}

int main()
{
    wyswietl("Hello! \n");
    printf("Suma wynosi: %d\n",suma(4,5));

    int a = 9;
    int b = 6;
    int wynik;

    wynik = roznica(a,b);
    printf("Rónica wynosi: %d\n", wynik);

    printf("Iloczyn wynosi: %d\n", iloczyn(2,3,2,0));

    //sleep(5);

    return 0;
}

/*int suma(int a, int b)
{
    return a + b;
}*/
