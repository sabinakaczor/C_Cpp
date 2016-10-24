#include <iostream>
#include <vector>

std::vector<int> sort(std::vector<int> tab)
{
    bool con = true;
    int temp;
    while(con) 
    {
        con = false;
        for(int i=0; i<tab.size()-1; ++i)
        {
            if(tab[i] > tab[i+1])
            {
                temp = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = temp;
                con = true;
            }
        }
    }
    return tab;
}


int main()
{
    std::vector<int> tab;
    for(int i=5;i>0;--i) {
        tab.push_back(i);
    }
    tab = sort(tab);
    for (int i = 0; i < 5; ++i) {
        std::cout << tab[i] << "\n";
    }
    std::cout << "\n\n";
    return 0;
}