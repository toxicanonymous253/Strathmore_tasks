#include <iostream>
#include <cmath> // for pow function
using namespace std;

int main() {
    char choice;
    int number = 15;

    cout << "Enter 'S' for square or 'C' for cube: ";
    cin >> choice;

    switch (choice) {
        case 'S':
        case 's':
            cout << "Square of " << number << " is: " << pow(number, 2) << endl;
            break;
        case 'C':
        case 'c':
            cout << "Cube of " << number << " is: " << pow(number, 3) << endl;
            break;
        default:
            cout << "Invalid choice. Please enter 'S' or 'C'." << endl;
            break;
    }

    return 0;
}
