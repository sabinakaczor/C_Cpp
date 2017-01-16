#ifndef GRACZ_H
#define GRACZ_H

#include <string>

using namespace std;

class Gracz
{
public:
    Gracz();
    void get_color();
private:
    string id;
    string color;
    int av_pieces;
    int thrown_dots;
    int pieces_home;
};

#endif // GRACZ_H
