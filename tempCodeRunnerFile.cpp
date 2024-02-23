#include <iostream>

// #include "robot.h"

using namespace std;
int main() {
    int membersNb = 0;
    cin >> membersNb;
    int total1, total2 = 0;
    for (int i = 0; i < membersNb; i++) {
        int team1 = 0;
        cin >> team1;
        int team2 = 0;
        cin >> team2;

        total1 += team1;
        total2 += team2;
    }

    if (total1 > total2) {
        cout << "L'équipe 1 a un avantage" << endl;
    } else {
        cout << "L'équipe 2 a un avantage" << endl;
    }
    cout << "Poids total pour l'équipe 1 : " << total1 << endl;
    cout << "Poids total pour l'équipe 2 : " << total2 << endl;
}