#include <cstdio>
#include <iostream>
using namespace std;
//function prototype
void modulous(int i, int j);

/**
 * main - check the code
 * 
 * Return: always 0
 */

int main(void)
{
    int i, j;

    cout << "Enter first number: ";
    cin>>i;
    cout << "Enter second number: ";
    cin>>j;

    modulous(i, j);

    return (0);
}

/**
 * modulous - this function will get the remainder after dividing
 * 
 * @i: first integer
 * @j: second integer
 * Return: nothing
 */
void modulous(int i, int j)
{
    if (j != 0)
    {
        int remainder = i % j;
        cout << "The remainder is: " << remainder << endl;
    }
    else{
        cout << "Cannot calculate modulus with divisor 0" << endl;
    }
}
