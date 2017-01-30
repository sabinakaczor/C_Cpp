#include "gracz.h"
#include <time.h>
#include <stdlib.h>
#include <vector>

Gracz::Gracz(string id)
{
    this->id = id;
    this->pieces_home = 4;
}


void Gracz::set_thrown_dots(int dots) {
    this->thrown_dots = dots;
}

void Gracz::update_tries() {
    this->tries += 1;
}

void Gracz::set_color(string color) {
    this->color = color;
}

