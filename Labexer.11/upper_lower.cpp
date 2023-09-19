#include <iostream>
#include <cctype> // For isupper and islower functions
using namespace std;
// Function to check if a character is uppercase
bool isUppercase(char ch) {
    return (isupper(ch));
}

// Function to check if a character is lowercase
bool isLowercase(char ch) {
    return (islower(ch));
}

int main() {
    char inputChar;

    // Ask the user to input a character
    cout << "Enter a character: ";
    cin >> inputChar;

    if (isUppercase(inputChar)) {
        cout << inputChar << " is an uppercase letter." << endl;
    } else if (isLowercase(inputChar)) {
        cout << inputChar << " is a lowercase letter." << endl;
    } else {
        cout << inputChar << " is not a letter." << endl;
    }

    return 0;
}
