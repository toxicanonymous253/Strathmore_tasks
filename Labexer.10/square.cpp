#include <iostream>
using namespace std;

// function prototypes
void perimeter(int length);
void area(int length);

/**
 * main - checks the code
 * Return: always 0
 */
int main(void)
{
    int length;
    cout<<"Enter a number: ";
    cin>>length;

    perimeter(length);
    area(length);

    return (0);
}

/**
 * perimeter - this function calculates the perimeter of a square
 * @length: length of the square
 * Return: void
 */

void perimeter(int length)
{
    int perimeter = length * 4;

    cout<<"The perimeter of a the square is: "<<perimeter<<endl;

    return;
}

/**
 * area - this calculates the area of a square
 * @length: this is the length of the square
 * Return: void
 */
void area(int length)
{
    int area = length * length;

    cout<<"The area of the square is: "<<area<<endl;

    return;
}
