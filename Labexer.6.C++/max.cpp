#include <iostream>
using namespace std;
//function prototype
void find_max(int numbers[], int size);

/**
 * main - checks the code
 * 
 * Return: always 0
 */
int main(void)
{
    int numbers[3], i;
    int size = 3;

    cout<<"Input 3 numbers so that we can find the largest number"<<endl;

    for (i = 0; i < 3; i++)
    {
        cin>>numbers[i];
    }

    find_max(numbers, size);

    return (0);
}

/**
 * find_max - this function is finding the max number
 * 
 * @numbers:the array
 * @size: size of the array
 * Return: void
 */
void find_max(int numbers[], int size)
{
    int iterator;

    if (size <= 0)
    {
        cout<<"No number inputed";
        return;
    }

    int max = numbers[0];

    for(iterator = 0; iterator < size; iterator++)
    {
        if (numbers[iterator] > max)
        {
            max = numbers[iterator];
        }
    }
    cout<<"Largest numebr is: "<<max<<endl;
    return;
}
