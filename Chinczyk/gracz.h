#ifndef GRACZ_H
#define GRACZ_H

#include <string>
#include <vector>

using namespace std;

class Gracz
{
public:
    Gracz(string id);
    void set_thrown_dots(int dots);
    void update_tries();
    void set_color(string color);
private:
    string id;
    string color;
    int av_pieces;
    int thrown_dots;
    int tries;
    int pieces_home;
};

#endif // GRACZ_H
