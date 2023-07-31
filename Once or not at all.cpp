#include<bits/stdc++.h>
using namespace std;

bool matchesPattern(const string& input) {
    int length = input.length();
    int index = 0;

    if (length < 3 || input[0] != 'a' || input[length - 1] != 'e') {
        return false;
    }

    index++;

    if (index < length - 1 && input[index] == 'b' && input[index + 1] == 'c') {
        index += 2;
    }

    return index == length - 1 || input.substr(index) == "de";
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (matchesPattern(input)) {
        cout << "Valid" << endl;
    } else {
        cout << "Invalid" << endl;
    }

    return 0;
}
