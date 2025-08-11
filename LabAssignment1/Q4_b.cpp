#include <iostream>
using namespace std;

int main() {
    int first[10][10], second[10][10], result[10][10];
    int row1, col1, row2, col2;

    cout << "Enter rows and columns of first matrix: ";
    cin >> row1 >> col1;

    cout << "Enter rows and columns of second matrix: ";
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication not possible.\n";
        return 0;
    }

    cout << "Enter elements of first matrix:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> first[i][j];
        }
    }

    cout << "Enter elements of second matrix:\n";
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> second[i][j];
        }
    }

    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                result[i][j] += first[i][k] * second[k][j];
            }
        }
    }

    cout << "Result of matrix multiplication:\n";
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
