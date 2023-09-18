#include <iostream>
using namespace std;
int main() {
    int start = 73;
    int end = 415;
    int sum = 0;

    do {
        sum += start;
        start++;
    } while (start <= end);

    cout << "The sum of integers from 73 to 415 is: " << sum << std::endl;

    return 0;
}
