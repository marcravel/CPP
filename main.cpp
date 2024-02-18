#include <iostream>
using namespace std;

int main() {
    int line = 0;
    int row = 0;
    cout << "Enter the line number: ";
    cin >> line;
    cout << "Enter the row number: ";
    cin >> row;
    char symbol = '*';
    cout << "Enter the symbol: ";
    cin >> symbol;

    for (int i = 0; i < line; i++) {
        for (int j = 0; j < row; j++) {
            cout << symbol;
        }
        cout << endl;
    }

    return 0;
}