#ifndef WEKTOR_H
#define WEKTOR_H


class wektor
{
    public:
        wektor(const wektor&);
        wektor();
        wektor(int a);
        wektor(int a, int b);
        ~wektor();
        wektor& operator = (const wektor&);
        void wypisz();
        void zmien(int j, int k);
        int zwroc_wartosc(int j);

    protected:

    private:
        int n;
        int *tab;
};

#endif // WEKTOR_H



//konstr kopiujacy
//destruktor
//operator przypisania
