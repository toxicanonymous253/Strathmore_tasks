#include <iostream>
using namespace std;

// function prototypes
void perimeter(int radius);
void area(int radius);

/**
 * main - checks the code
 * 
 * Return: 0 always
 */
int main(void)
{
    int radius = 15;

    perimeter(radius);
    area(radius);

    return (0);
}
/**
 * perimeter - this function calculates the perimeter of a circle
 * @radius: radius of the circle
 * Return: void
 */
void perimeter(int radius)
{
    int perimeter = 2 * 3.142 * radius;

    cout<<"The perimeter is: "<<perimeter<<endl; 

    return;
}
/**
 * area - this function calculates the area of a circle
 * @radius: radius of the circle
 * Return: void
 */
void area(int radius)
{
    int area = 3.142 * radius * radius;

    cout << "The area is: "<<area<<endl;

    return;
}