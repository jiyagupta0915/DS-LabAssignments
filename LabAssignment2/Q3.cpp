#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int size) {
    int first = arr[0];
    int last = arr[size - 1];

    int n = last - first + 1; 
    int expectedSum = (n * (first + last)) / 2;

    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }

    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8}; 
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing number is: " << findMissingNumber(arr, size) << endl;

    return 0;
}
