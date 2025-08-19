#include <iostream>
#include <string>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string s, result = "";
    cout << "Enter a string: ";
    getline(cin, s);

    for (char c : s) {
        if (!isVowel(c)) result += c;
    }

    cout << "String without vowels: " << result << endl;
    return 0;
}
