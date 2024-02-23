#include <iostream>

using namespace std;

int main() {
    int grid[4][4] = {{0, 1, 1, 0}, {0, 0, 1, 0}, {0, 1, 0, 1}, {1, 1, 0, 0}};

    int hits = 0;
    int attempts = 0;

    while (hits < 4) {
        cout << "Row(1-4): ";
        int row = 0;
        cin >> row;
        cout << "Column(1-4): ";
        int col = 0;
        cin >> col;

        int coord = grid[row - 1][col - 1];
        if (coord == 1) {
            hits++;
            attempts++;
            cout << "You hit! (" << (4 - hits) << " hits left)" << endl;
        } else {
            attempts++;
            cout << "Water!!" << endl;
        }
    }
    cout << "You destroyed the 4 ships by " << attempts << " attempts" << endl;

    return 0;
}