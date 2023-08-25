#include <iostream>
using namespace std;

//function prototype
void divide(int num);
/**
 * main - check the code
 * 
 * Return: always 0 when successful
 */
int main(void)
{
    int num;

    cout<<"Enter a number so that it can be tested if it is divisble by both 5 and 11: ";
    cin>>num;

    divide(num);

    return (0);
}

/**
 * divide - this function will check if a number is divisible by 5 or 11
 * @num: integer to be checked
 * Return: void
 */

void divide(int num)
{
    if (num % 5 == 0 && num % 11 == 0)
    {
        cout<<""<<num<<" is divisible by both 5 and 11\n";
    }
    else{
        cout<<"Not divisible by both 5 and 11\n";
    }

    return;
}
