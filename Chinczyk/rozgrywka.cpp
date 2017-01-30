#include "rozgrywka.h"
#include <time.h>
#include <stdlib.h>
#include <vector>

Rozgrywka::Rozgrywka(vector<Gracz*> players)
{
    this->av_colors.push_back("czerwony");
    this->av_colors.push_back("niebieski");
    this->av_colors.push_back("zielony");
    this->av_colors.push_back("żółty");
    this->players = players;
}

void Rozgrywka::throw_die(Gracz *g) {
    srand (time(NULL));
    int thrown = rand() % 6 + 1;
    g->set_thrown_dots(thrown);
    g->update_tries();
}


void Rozgrywka::set_colors()
{
    string colors[4] = {"czerwony", "niebieski", "żółty", "zielony"};
    vector<int> used;
    int chosen;
    bool in_used = false;
    for(int i=0; i<this->players.size(); ++i) {
        do {
            srand (time(NULL));
            chosen = rand() % 4;
            for(int j=0; j<used.size(); ++j) {
                if(chosen == used[j]) {
                    in_used = true;
                    break;
                } else {
                    in_used = false;
                }

            }
        } while(in_used);

        if(!in_used) {
            used.push_back(chosen);
            this->players[i]->set_color(colors[chosen]);
        }

    }
}

/*vector<Gracz*> Rozgrywka::get_players() {
    return this->players;
}*/
