#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int count = 0;
    int num;

    while (true) {
        cout << "Enter a positive integer (or 0 to calculate average): ";
        cin >> num;

        if (num < 0) {
            cout << "ERROR" << std::endl;
        } else if (num == 0) {
            break; // Exit the loop when 0 is entered
        } else {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        double average = static_cast<double>(sum) / count;
        cout << "Average of the positive integers: " << average << std::endl;
    } else {
        cout << "NO AVERAGE" << std::endl;
    }

    return 0;
}
