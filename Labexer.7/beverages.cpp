#include <iostream>

using namespace std;

int main() {
    int choice;

    cout << "Choose a beverage:" << endl;
    cout << "1. Coke" << endl;
    cout << "2. Water" << endl;
    cout << "3. Sprite" << endl;
    cout << "4. Fanta" << endl;
    cout << "5. Fresh Juice" << endl;

    cout << "Enter your choice (1-5): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You chose Coke." << endl;
            break;
        case 2:
            cout << "You chose Water." << endl;
            break;
        case 3:
            cout << "You chose Sprite." << endl;
            break;
        case 4:
            cout << "You chose Fanta." << endl;
            break;
        case 5:
            cout << "You chose Fresh Juice." << endl;
            break;
        default:
            cout << "Error. Choice was not valid; here is your money back." << endl;
            break;
    }

    return 0;
}
