#include <stdio.h>
#include <stdlib.h>

//struktury definiujemy przed main

typedef struct{
    char marka[10];
    char color[10];
    int ilosc_drzwi;
} Samochod; //nazwa

Samochod sam()
{
    Samochod sam1 = {"Audi", "czarny", 4};
    return sam1;
}





int main()
{
    Samochod sam1;
    sam1 = sam();
    puts("Parametry samochodu:\n");
    printf("Marka: %s\n", sam1.marka);
    printf("Kolor: %s\n", sam1.color);
    printf("Ilosc drzwi: %d\n", sam1.ilosc_drzwi);

    //wskazniki
    int *wsk; //definicja wskaznika do wartosci
            //zmienna wskaznikowa na obiekt typu liczba calkowita

    int liczba = 80;
    int *wskaznik = &liczba;  //wskaznik przechowuje adres, ktory pobieramy od zmiennej liczba

    printf("Wartosc zmiennej: %d, jej adres: %p.\n", liczba, &liczba); //%p - pointer
    printf("Adres przechowywany we wskazniku: %p, wskazywana wartosc: %d.\n", wskaznik, *wskaznik);

    *wskaznik = 42; //zapisanie liczby 42 do obiektu, na który wskazuje wskaznik
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", liczba, *wskaznik);

    liczba = 0x42;
    printf("Wartosc zmiennej: %d, wartosc wskazywana przez wskaznik: %d\n", liczba, *wskaznik);


   /* //wskazniki na stala wartosc
    const int *a;
    int const *a; //to samo co powyzej

    //stale wskazniki
    int *const b;

    //staly wskaznik, ktorym nie mozna zmienic wartosci wskazywanej
    const int *const c;
    const int *const c;*/

    //sleep(5);

    return 0;
}
