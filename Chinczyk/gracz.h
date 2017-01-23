#ifndef GRACZ_H
#define GRACZ_H

#include <string>
#include <vector>

using namespace std;

class Gracz
{
public:
    Gracz();
    vector<string> get_color(vector<string> colors);
private:
    string id;
    string color;
    int av_pieces;
    int thrown_dots;
    int pieces_home;
};

#endif // GRACZ_H
