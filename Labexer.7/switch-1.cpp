#include <iostream>
using namespace std;

int main() {
    int Digit;
    char value;

    cout << "Enter a digit: ";
    cin >> Digit;

    switch (Digit) {
        case 6:
            value = 'A';
            break;
        case 0:
        case 1:
        case 2:
            value = 'C';
            break;
        case 4:
        case 5:
            value = 'B';
            break;
        default:
            value = 'D';
            break;
    }

    cout << "The corresponding value is: " << value << endl;

    return 0;
}
