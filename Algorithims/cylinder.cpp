#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius, height, volume;

    cout << "Welcome to the Cylinder Volume Calculator!" << endl;

    cout << "Enter the radius of the cylinder (in units): ";
    cin >> radius;

    cout << "Enter the height of the cylinder (in units): ";
    cin >> height;

    volume = M_PI * pow(radius, 2) * height; // Calculate the volume using pi from the cmath library

    cout << "The volume of the cylinder is: " << volume << " cubic units" << endl;

    return 0;
}
