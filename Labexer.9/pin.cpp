#include <iostream>
using namespace std;

int main()
{
    const int correctPin = 1234; // Initialize the correct PIN
    int attempts = 0;
    int enteredPin;

    while (attempts < 4) {
        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == correctPin) {
            cout << "PIN verified" << endl;
            cout << "Welcome" << endl;
            break; // Exit the loop if the PIN is correct
        } else {
            cout << "Incorrect PIN. Please try again." << endl;
            attempts++;
        }
    }

    if (attempts == 4) {
        cout << "Limit expired. Exiting program." << endl;
    }

    return 0;
}
