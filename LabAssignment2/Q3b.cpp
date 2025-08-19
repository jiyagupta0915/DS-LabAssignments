#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int left = 0, right = n - 2; // array has n-1 elements
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == mid + 1) {
            left = mid + 1; // missing number is on the right
        } else {
            right = mid - 1; // missing number is on the left
        }
    }
    return left + 1; // missing number
}

int main() {
    int arr[] = {1, 2, 3, 5, 6};
    int n = 6; // range is 1 to 6
    cout << "Missing number (Binary Search): " << findMissingBinary(arr, n) << endl;
    return 0;
}
