#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nazwa[50];
    float cena;
    char kat[20];
    float liczba_sztuk;
} Produkt;

Produkt dodajNowy() {
    Produkt pr;
    printf("Nazwa: ");
    scanf("%s",&pr.nazwa);
    printf("Cena: ");
    scanf("%f",&pr.cena);
    printf("Kategoria: ");
    scanf("%s",&pr.kat);
    printf("Dostępna liczba / ilość: ");
    scanf("%f",&pr.liczba_sztuk);
    return pr;
}

char pobierzDecyzje() {
    char d;
    scanf("%c",&d);
    while(d!='S' && d!='M') {
        printf("Wpisz S lub M: ");
        scanf("%c",&d);
    }
    return d;
}
Produkt modyfikuj(Produkt pr) {
    char d;

    printf("Nazwa: %s   S - zachowaj; M - zmień\n", pr.nazwa);
    d = pobierzDecyzje();
    if (d=='M') {
        printf("Nowa nazwa: ");
        scanf("%s",&pr.nazwa);
    }

    printf("Cena: %.2f   S - zachowaj; M - zmień\n", pr.cena);
    d = pobierzDecyzje();
    if (d=='M') {
        printf("Nowa cena: ");
        scanf("%f",&pr.cena);
    }

    printf("Kategoria: %s   S - zachowaj; M - zmień\n", pr.kat);
    d = pobierzDecyzje();
    if (d=='M') {
        printf("Nowa kategoria: ");
        scanf("%s",&pr.kat);
    }

    printf("Dostępna liczba / ilość: %.2f   S - zachowaj; M - zmień\n", pr.liczba_sztuk);
    d = pobierzDecyzje();
    if (d=='M') {
        printf("Nowa liczba / ilość: ");
        scanf("%f",&pr.liczba_sztuk);
    }

    return pr;
}

void zapiszProdukt(char plik[], Produkt pr) {
    FILE *fp;
    if ((fp=fopen(plik,"a"))==NULL) {
        printf("Błąd otwarcia pliku do zapisu!\n");
        exit(1);
    }
    fprintf(fp, "%s ", pr.nazwa);
    fprintf(fp, "%.2f ", pr.cena);
    fprintf(fp, "%s ", pr.kat);
    fprintf(fp, "%.2f", pr.liczba_sztuk);
    fprintf(fp, "\n");
    fclose(fp);
}

void zapiszDane(char plik[], Produkt *pr, int size) {
    FILE *fp;
    if ((fp=fopen(plik,"w"))==NULL) {
        printf("Błąd otwarcia pliku do zapisu!\n");
        exit(1);
    }
    int i;
    for (i=0; i<size; ++i) {
        fprintf(fp, "%s ", pr[i].nazwa);
        fprintf(fp, "%.2f ", pr[i].cena);
        fprintf(fp, "%s ", pr[i].kat);
        fprintf(fp, "%.2f", pr[i].liczba_sztuk);
        fprintf(fp, "\n");
    }
    fclose(fp);
}

Produkt* usunProdukt(Produkt *pr, int i, int size) {
    int k;
    for (k=i; k<size; ++k) {
        pr[k] = pr[k+1];
    }
    return pr;
}

int pobierzProdukty(char plik[], Produkt *pr) {
    FILE *fp;
    if ((fp=fopen(plik,"r"))==NULL) {
        return -1;
    }
    int i=0;
    rewind(fp);
    while (1) {
        if (feof(fp))
            break;
        fscanf(fp, "%s", &pr[i].nazwa);
        fscanf(fp, "%f", &pr[i].cena);
        fscanf(fp, "%s", &pr[i].kat);
        fscanf(fp, "%f", &pr[i].liczba_sztuk);
        if(!feof(fp))
            i++;
    }
    fclose(fp);
    return i;
}




int main()
{
    Produkt *pr;
    pr = malloc(sizeof(*pr)*100);
    int ile = pobierzProdukty("sklep.txt", pr);
    int i, d;
    while(1) {
        /*for (i=0; i<100; ++i)
        {
            free(&pr[i].nazwa);
            free(&pr[i].cena);
            free(&pr[i].kat);
            free(&pr[i].liczba_sztuk);
        }*/
        ile = pobierzProdukty("sklep.txt", pr);
        printf(" %s %14s %15s %15s %16s", "LP", "NAZWA", "CENA", "KATEGORIA", "DOSTĘPNYCH");
        for (i = 0; i < ile; i++) {
            printf("\n%2d %15s %15.2f %15s %15.2f", i+1, pr[i].nazwa, pr[i].cena, pr[i].kat, pr[i].liczba_sztuk);
        }
        printf("\n\n1 - dodaje produkt; 2 - modyfikuje produkt; 3 - usuwa produkt; 0 - wyjście\n");
        scanf("%d", &d);
        while (d != 1 && d!= 2 && d!=3 && d!=0) {
            printf("\nWpisz 1, 2, 3 lub 0\n");
            scanf("%d", &d);
        }
        switch(d) {
            case 0:
                return 0;
            case 1:
            {
                Produkt produkt = dodajNowy();
                zapiszProdukt("sklep.txt",produkt);
                break;
            }
            case 2:
            {
                printf("Który produkt chcesz zmodyfikować?\n");
                int id;
                scanf("%d",&id);
                while (id<1 || id>ile) {
                    printf("Podałeś niepoprawny numer produktu, spróbuj ponownie\n");
                    scanf("%d",&id);
                }
                pr[id-1] = modyfikuj(pr[id-1]);
                zapiszDane("sklep.txt",pr,ile);
                printf("\n");
                break;
            }
            case 3:
            {
                printf("Który produkt chcesz usunąć?\n");
                int id;
                scanf("%d",&id);
                while (id<1 || id>ile) {
                    printf("Podałeś niepoprawny numer produktu, spróbuj ponownie\n");
                    scanf("%d",&id);
                }
                pr = usunProdukt(pr,id-1,ile);
                ile -= 1;
                zapiszDane("sklep.txt",pr,ile);
                printf("\n");
                break;
            }
        }
    }
    free(pr);


    return 0;
}
