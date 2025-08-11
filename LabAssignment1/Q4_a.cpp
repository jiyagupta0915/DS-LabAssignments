//Reverse the elements of array
#include <iostream>
using namespace std;

int main() {
    int values[100], total;

    cout << "Enter number of elements: ";
    cin >> total;

    cout << "Enter the elements:\n";
    for (int i = 0; i < total; i++) {
        cin >> values[i];
    }

    for (int i = 0; i < total / 2; i++) {
        int temp = values[i];
        values[i] = values[total - 1 - i];
        values[total - 1 - i] = temp;
    }

    cout << "Reversed array:\n";
    for (int i = 0; i < total; i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}
