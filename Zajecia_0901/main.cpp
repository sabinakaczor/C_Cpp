#include <iostream>
#include <string>

using namespace std;

class pionek
{
private:
    int x,y;
    string kolor = "biały";
    int pozycja = 5;
    friend void raport(pionek &);
public:
    /*pionek(string kolor, int x, int y) {
        this->kolor = kolor;
        this->x = x;
        this->y = y;
    }*/
};

void raport(pionek & p)
{
    cout << p.kolor << " pionek jest na pozycji " << p.pozycja << endl;
}

int main()
{
    //pionek *p = new pionek("biały", 5, 2);
    pionek p;
    raport(p);

    return 0;
}
