#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double number = 211.64;

    // Calculate the ceiling and floor values
    double ceilValue = ceil(number);
    double floorValue = floor(number);

    // Display the results
    cout << "Original Number: " << number << endl;
    cout << "Ceiling Value: " << ceilValue << endl;
    cout << "Floor Value: " << floorValue << endl;

    return 0;
}
