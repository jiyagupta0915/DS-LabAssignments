#include <iostream>
using namespace std;

int main() {
    int numbers[100], size;

    cout << "Enter number of elements: ";
    cin >> size;

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; ) {
            if (numbers[i] == numbers[j]) {
                for (int k = j; k < size - 1; k++) {
                    numbers[k] = numbers[k + 1];
                }
                size--;
            } else {
                j++;
            }
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < size; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
