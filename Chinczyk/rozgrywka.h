#ifndef ROZGRYWKA_H
#define ROZGRYWKA_H

#include <vector>
#include <string>
#include "gracz.h"

using namespace std;

class Rozgrywka
{
private:
    vector<string> av_colors;
    vector<Gracz*> players;
public:
    Rozgrywka(vector<Gracz*> players);
    void throw_die(Gracz *g);
    void set_colors();
    vector<Gracz*> get_players;
};

#endif // ROZGRYWKA_H
