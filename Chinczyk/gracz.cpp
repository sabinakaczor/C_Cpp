#include "gracz.h"
#include <time.h>
#include <stdlib.h>
#include <vector>

Gracz::Gracz()
{}


vector<string> Gracz::get_color(vector<string> colors)
{
    //string colors[4] = {"czerwony", "niebieski", "żółty", "zielony"};
    srand (time(NULL));
    int chosen = rand() % 4;
    this->color = colors[chosen];
    colors.erase(colors.begin() + chosen);
    return colors;
}

