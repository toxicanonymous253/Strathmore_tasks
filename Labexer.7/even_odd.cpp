#include <iostream>
using namespace std;
// function prototype
void check_even_odd(int num);

/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
    int num;

    cout<< "Enter a numbee to be tested if it is odd or even: ";
    cin>>num;

    check_even_odd(num);
    return (0);
}
/**
 * check_even_odd - this function checks if the number is even or odd
 * @num: number to be checked
 * Return: void
 */
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
