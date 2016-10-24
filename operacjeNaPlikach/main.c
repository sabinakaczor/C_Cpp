#include <stdio.h>
#include <stdlib.h>

int main() {

/*
Sposoby otwarcia pliku - funkcja fopen()
"r" - otwiera plik do czytania
"r+" - otwiera plik do czytania i nadpisywania (aktualizacja)
"w"  - otwiera plik do nadpisywania (zamazuje starą treść)
"w+" - otwiera plik do nadpisywania i czytania
"a" - otwiera plik do dopisywania
    (jeśli plik nie istnieje, to jest tworzony)
"a+" - otwiera plik do dopisywania i odczytu
"t" - otwiera plik w trybie tekstowym
"b" - otwiera plik w trybie binarnym

Litery można ze sobą łączyć, np "rbw" albo "wt".

*/

//zapis pliku
/*FILE *fp;
char tekst[] = "Mój pierwszy plik";

if((fp=fopen("napis.txt","w"))==NULL)
{
    printf("Błąd otwarcia pliku do zapisu napis.txt!\n");
    exit(1);
}
fprintf(fp, "%s", tekst); //zapisujemy do pliku tekst
fclose(fp);*/

//odczyt pliku
typedef FILE *plik;
plik fp1;
int c;

if ((fp1=fopen("napis1.txt", "r"))==NULL)
{
    perror("Błąd otwarcia pliku do odczytu napis.txt!\n");
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


//strumienie
/*
stdin - wejście
stdout - wyjście
stderr - błędy
*/
/*fprintf(stdout,"\nWitaj!\n");

int wiek;
fscanf(stdin,"%d",&wiek);
fprintf(stdout,"%d",wiek);
*/

return 0;
}

