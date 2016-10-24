#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    char lastName[50];
    long telNumber;
    char dateOfBirth[30];
    char address[60];
    char email[30];
} Osoba;

Osoba przypiszDane() {

    Osoba osoba;

    printf("Podaj imię\n");
    scanf("%s",&osoba.name);
    printf("Podaj nazwisko\n");
    scanf("%s",&osoba.lastName);
    printf("Podaj datę urodzenia\n");
    scanf("%s",&osoba.dateOfBirth);
    printf("Podaj adres zamieszkania\n");
    scanf("%s",&osoba.address);
    printf("Podaj numer telefonu\n");
    scanf("%li",&osoba.telNumber);
    printf("Podaj adres email\n");
    scanf("%s",&osoba.email);
    printf("\n");

    return osoba;
}


int main()
{
    int ile;

    printf("Ile osób chcesz zapisac?\n");
    scanf("%d", &ile);
    printf("\n");

    Osoba *listaOsob;
    listaOsob = malloc(ile * sizeof(*listaOsob));

    for(int i = 0; i < ile; i++) {
        printf("Pobieram dane %d. osoby\n", i+1);
        listaOsob[i] = przypiszDane();
    }

    printf("Zapisane osoby:\n");
    for(int i = 0; i<ile; i++) {
        printf("\n%d. osoba:\n", i+1);
        printf("Imie i nazwisko: %s %s\n", listaOsob[i].name, listaOsob[i].lastName);
        printf("Data urodzenia: %s\n", listaOsob[i].dateOfBirth);
        printf("Adres: %s\n", listaOsob[i].address);
        printf("Numer telefonu: %li\n", listaOsob[i].telNumber);
        printf("Email: %s\n", listaOsob[i].email);
    }

    free(listaOsob);

    return 0;
}


