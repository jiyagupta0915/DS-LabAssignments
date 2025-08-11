#include <iostream>
using namespace std;

int main() {
    int numbers[100], size = 0, choice;
    
    while (true) {
        cout << "\nMENU\n";
        cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter number of elements: ";
            cin >> size;
            cout << "Enter elements:\n";
            for (int i = 0; i < size; i++) {
                cin >> numbers[i];
            }
        }

        else if (choice == 2) {
            if (size == 0) {
                cout << "Array is empty.\n";
            } else {
                cout << "Array elements: ";
                for (int i = 0; i < size; i++) {
                    cout << numbers[i] << " ";
                }
                cout << endl;
            }
        }

        else if (choice == 3) {
            int position, value;
            if (size >= 100) {
                cout << "Array is full. Cannot insert.\n";
            } else {
                cout << "Enter position (0 to " << size << "): ";
                cin >> position;
                if (position < 0 || position > size) {
                    cout << "Invalid position.\n";
                } else {
                    cout << "Enter value to insert: ";
                    cin >> value;
                    for (int i = size; i > position; i--) {
                        numbers[i] = numbers[i - 1];
                    }
                    numbers[position] = value;
                    size++;
                }
            }
        }

        else if (choice == 4) {
            int position;
            if (size == 0) {
                cout << "Array is empty. Nothing to delete.\n";
            } else {
                cout << "Enter position to delete (0 to " << size - 1 << "): ";
                cin >> position;
                if (position < 0 || position >= size) {
                    cout << "Invalid position.\n";
                } else {
                    for (int i = position; i < size - 1; i++) {
                        numbers[i] = numbers[i + 1];
                    }
                    size--;
                    cout << "Element deleted.\n";
                }
            }
        }

        else if (choice == 5) {
            int value, found = -1;
            cout << "Enter value to search: ";
            cin >> value;
            for (int i = 0; i < size; i++) {
                if (numbers[i] == value) {
                    found = i;
                    break;
                }
            }
            if (found != -1) {
                cout << "Value found at position " << found << ".\n";
            } else {
                cout << "Value not found.\n";
            }
        }

        else if (choice == 6) {
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
