#include <iostream>
using namespace std;

int main() {
    int start = 73;
    int end = 415;
    int sum = 0;

    for (int i = start; i <= end; i++) {
        sum += i;
    }

    cout << "The sum of integers from 73 to 415 is: " << sum << std::endl;

    return 0;
}
