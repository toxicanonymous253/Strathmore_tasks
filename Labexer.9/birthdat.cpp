#include <iostream>
using namespace std;

int main() {
    int age;
    
    // Ask the user for their age
    cout << "Enter your age: ";
    cin >> age;
    
    // Ensure age is non-negative
    if (age < 0) {
        cout << "Invalid age. Please enter a non-negative age." << std::endl;
        return 1;
    }

    // Use a do-while loop to print "Happy Birthday!" for each year of age
    int year = 1;
    do {
        cout << "Happy Birthday!" << std::endl;
        year++;
    } while (year <= age);

    return 0;
}
