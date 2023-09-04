#include <iostream>
using namespace std;

int main() {
    int input;

    cout << "Enter a code to check aircraft status:" << endl;
    cout << "100: Normal speed range" << endl;
    cout << "101: Over-speed warning" << endl;
    cout << "88: Low Oil Pressure" << endl;
    cout << "187: Engine Failure" << endl;

    cin >> input;

    switch (input) {
        case 100:
            cout << "Normal speed range" << endl;
            break;
        case 101:
            cout << "Over-speed warning" << endl;
            break;
        case 88:
            cout << "Low Oil Pressure" << endl;
            break;
        case 187:
            cout << "Engine Failure" << endl;
            break;
        default:
            cout << "Invalid input. No matching status found." << endl;
            break;
    }

    return 0;
}
