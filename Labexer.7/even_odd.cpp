#include <iostream>
using namespace std;

void check_even_odd(int num);

int main(void)
{
    int num;

    cout<< "Enter a numbee to be tested if it is odd or even: ";
    cin>>num;

    check_even_odd(num);
    return (0);
}

void check_even_odd(int num)
{
    if (num % 2 == 0)
        cout<<  "The number is even. \n";

    else if(num % 2 != 0)
        cout<< "The number is odd\n";
    else
        cout<< "Invalid input\n";
    return; 
}
