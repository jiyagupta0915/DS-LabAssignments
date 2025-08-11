#include <iostream>
using namespace std;

int main() {
    int table[10][10];
    int totalRows, totalColumns;

    cout << "Enter number of rows and columns: ";
    cin >> totalRows >> totalColumns;

    cout << "Enter the elements of the matrix:\n";
    for (int row = 0; row < totalRows; row++) {
        for (int col = 0; col < totalColumns; col++) {
            cin >> table[row][col];
        }
    }

    cout << "\nSum of each row:\n";
    for (int row = 0; row < totalRows; row++) {
        int rowSum = 0;
        for (int col = 0; col < totalColumns; col++) {
            rowSum += table[row][col];
        }
        cout << "Row " << row + 1 << ": " << rowSum << endl;
    }

    cout << "\nSum of each column:\n";
    for (int col = 0; col < totalColumns; col++) {
        int columnSum = 0;
        for (int row = 0; row < totalRows; row++) {
            columnSum += table[row][col];
        }
        cout << "Column " << col + 1 << ": " << columnSum << endl;
    }

    return 0;
}

