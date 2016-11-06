#include <stdio.h>

int main()
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
    printf("Podaj datę urodzenia\n");
    scanf("%s",&dateOfBirth);
    printf("Podaj adres zamieszkania\n");
    scanf("%s",&address);
    printf("Podaj numer telefonu\n");
    scanf("%d",&telNumber);
    printf("Podaj adres email\n");
    scanf("%s",&email);

    FILE *fp;
    if((fp=fopen("dane.txt","w"))==NULL)
    {
        printf("Błąd otwarcia pliku do zapisu napis.txt!\n");
        exit(1);
    }
    fprintf(fp, "Nazywasz się %s %s.\nTwój nr telefonu to %d;\nTwoja data urodzenia to %s;\nadres to %s;\nemail to %s.\nDane te odczytuję z pliku dane.txt.\n", name, lastName, telNumber, dateOfBirth, address, email);
    fclose(fp);
    typedef FILE *plik;
    plik fp1;
    int c;

    if ((fp1=fopen("dane.txt", "r"))==NULL)
    {
        printf("Błąd otwarcia pliku do odczytu napis.txt!\n");
        exit(1);
    }
    while(1)
    {
        c = fgetc(fp1);

        if(feof(fp1))
            break;

        printf("%c", c);
    }
    fclose(fp1);



    return 0;
}

