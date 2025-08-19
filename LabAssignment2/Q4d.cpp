#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    cin.ignore(); // clear buffer

    string arr[n];
    cout << "Enter strings:" << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, arr[i]);
    }

    sort(arr, arr + n);

    cout << "Strings in alphabetical order:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
    return 0;
}
