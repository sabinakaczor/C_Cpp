#include "gracz.h"
#include <time.h>
#include <stdlib.h>

Gracz::Gracz()
{}


void Gracz::get_color()
{
    string colors[4] = {"czerwony", "niebieski", "żółty", "zielony"};
    srand (time(NULL));
    this->color = colors[rand() % 4];
}

