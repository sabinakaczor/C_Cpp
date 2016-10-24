#include <stdio.h>

int dane()
{
    char name[50];
    char lastName[50];
    int telNumber;
    char dateOfBirth[30];
    char address[60];
    char email[30];
    printf("Podaj imię\n");
    scanf("%s",&name);
    printf("Podaj nazwisko\n");
    scanf("%s",&lastName);
    printf("Nazywasz się %s %s\n", name,lastName);
    printf("Podaj datę urodzenia\n");
    scanf("%s",&dateOfBirth);
    printf("Podaj adres zamieszkania\n");
    scanf("%s",&address);
    printf("Podaj numer telefonu\n");
    scanf("%d",&telNumber);
    //printf("Wpisałeś %d\n",&telNumber);
    printf("Podaj adres email\n");
    scanf("%s",&email);

    FILE *fp;
    char tekst[] = "Nazywasz się "; //nr telefonu to %d, Twoja data urodzenia to %s, adres to %s,  email to %s\n", name, lastName, telNumber, dateOfBirth, address, email;

    if((fp=fopen("napis.txt","w"))==NULL)
    {
        printf("Błąd otwarcia pliku do zapisu napis.txt!\n");
        exit(1);
    }
    fprintf(fp, "%s", tekst);
    fprintf(fp, "%s", name);
    fprintf(fp, "%s", lastName);
    fclose(fp);
   // printf("Nazywasz się %s %s, nr telefonu to %d, Twoja data urodzenia to %s, adres to %s,  email to %s\n", name, lastName, telNumber, dateOfBirth, address, email);
    return 0;
}

