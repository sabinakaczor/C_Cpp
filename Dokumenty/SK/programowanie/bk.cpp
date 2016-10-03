#include <ctime>
#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int vectorFind(int, vector <int>);
int bullCounter(vector <int>, vector <int>);
int cowCounter(vector <int>, vector <int>);
bool checkIfDuplicated(vector <int>);
vector <int> intToVector(int);
string to_string(int);
string decision;
void drawNumber(vector <int>);

// BYKI + KROWY = <3

int main()
{
    srand(time(NULL));

    vector <int> digits, guess;
    //int temp;
    int guess1;
    int score = 0;
    string info;

    drawNumber(digits);
    while (true) {
        if (bullCounter(guess, digits) != 4) {
            cout << "Zgadnij liczbę hehe\n";
        }
        cin >> guess1;
        guess = intToVector(guess1);

        while (!(guess1 > 1000 && guess1 < 10000) || checkIfDuplicated(guess)) {
            cout << "Niepoprawny format liczby, spróbuj jeszcze raz!\n";
            cin >> guess1;
            guess = intToVector(guess1);
            //cout << guess[0] <<guess[1] <<guess[2] <<guess[3] << guess.size() <<  "\n";
        }

        if (bullCounter(guess, digits) == 4) {
            info = "Brawo!!!!!!!!\nCzy chcesz grać dalej??? T/N\n";
            cin >> decision;
            if (decision == "T") {
                drawNumber(digits);
            }

        } else {
            info = "Zdobyłeś " + to_string(bullCounter(guess, digits)) + " byków i "
             + to_string(cowCounter(guess, digits)) + " muciek";
        }
        cout << info;
    }


    return 0;
}

void drawNumber (vector <int> digits)
{
    int temp;
    for (int i = 0; i <= 3; i++) {
            do {
                temp = rand()%10;
            } while (vectorFind(temp, digits) != -1);
            digits.push_back(temp);
            cout << temp;
        }
        cout << "\n";
}

int vectorFind(int what, vector <int> where)
{
    for (int i = 0; i < where.size(); i++) {
        if (what == where[i]) {
            return i;
        }
    }
    return -1;
}

vector <int> intToVector(int number)
{
    vector <int> res, result;

    if (number == 0) {
        result.push_back(number);
    } else {
        while (number > 0) {
            res.push_back(number % 10);
            number /= 10;
        }
    }

    for (int i = res.size() - 1; i >= 0; i--) {
        result.push_back(res[i]);
    }

    return result;

}

int bullCounter(vector <int> guess, vector <int> number)
{
    int score = 0;
    for (int i = 0; i < guess.size(); i++) {
            if (guess[i] == number[i]) {
                score += 1;
            }
    }
    return score;
}


int cowCounter(vector <int> guess, vector <int> number)
{
    int score = 0;
    for (int i = 0; i < guess.size(); i++) {
            for (int j = 0; j < number.size(); j++) {
                if (guess[i] == number[j] && i != j) {
                    score += 1;
                }
            }
    }
    return score;
}

bool checkIfDuplicated(vector <int> number)
{
    bool ans = false;
    for(int i = 0; i < number.size(); i++) {
        for(int j = i + 1; j < number.size(); j++) {
            if(number[i] == number[j]) {
                ans = true;
            }
        }
    }
    return ans;
}

string to_string(int num)
{
    ostringstream out;
    out << num;
    return out.str();
}
