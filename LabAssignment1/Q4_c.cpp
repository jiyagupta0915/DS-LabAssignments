#include <iostream>
using namespace std;

int main() {
    int matrix[10][10], transposed[10][10];
    int rows, columns;

    cout << "Enter number of rows and columns: ";
    cin >> rows >> columns;

    cout << "Enter the matrix:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:\n";
    for (int i = 0; i < columns; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
