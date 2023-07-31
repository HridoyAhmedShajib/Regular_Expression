#include<bits/stdc++.h>
using namespace std;


bool matchesPattern(const string & input) {
    int length = input.length();
    int index = 0;

    if (input.length()<2 || input[0]!= 'a' || input[length - 2] != 'd' || input[length - 1] != 'e') {
        return 0;
    }

    index++;

    while (index < input.length()-2) {
        if (input[index] != 'b' || input[index + 1] != 'c') {
            return 0;
        }
        index += 2;
    }

    return index > 1 && input.substr(index)=="de";
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
