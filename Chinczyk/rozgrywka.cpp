#include "rozgrywka.h"

Rozgrywka::Rozgrywka(vector<Gracz> players)
{
    this->av_colors.push_back("czerwony");
    this->av_colors.push_back("niebieski");
    this->av_colors.push_back("zielony");
    this->av_colors.push_back("żółty");
    this->players = players;
}
