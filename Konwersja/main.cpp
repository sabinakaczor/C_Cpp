#include <iostream>
#include <vector>

using namespace std;

//system 10 na 2,3,5,8,16


void dwojkowy(int n) {
    vector<int> b;
    while(n>1) {
        if (n % 2 == 1) {
            b.push_back(1);
        } else {
            b.push_back(0);
        }
        n /= 2;
    }
}
void osemkowy() {}
void szesnastkowy() {}
void trojkowy() {}

int main()
{

    return 0;
}
