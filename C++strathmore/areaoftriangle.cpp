#include <cstdio>
#include <cmath>
//Function prototypes
int perimeter(int base, int hypotenuse, int height);
int area(int base, int height);

/**
 * main - check the code
 * Return: always 0
 */
int main(void)
{
	int base = 10, height = 7, hypotenuse = 12;

	int trisum = perimeter(base, hypotenuse, height);
	int triarea = area(base, height);
	
	printf("The area of the triangle is %.0f\n", (float)triarea);
	printf("The perimeter of the triangle is %d\n", trisum);

	return (0);
}

/**
 * perimeter - this fucntion will calculate the perimeter of the triangle
 * @base: This will hold the base value
 * @hypotenuse: This will hold the hypotenuse value
 * @height: This will hold the height value
 * Return: int value
 */

int perimeter(int base, int hypotenuse,int height)
{
	int sum = 0;
	sum = base + hypotenuse + height;

	return (sum);
}
/**
 * area - this fucntion will calculate the area of the triangle
 * @base: This will hold the base value
 * @height: This will hold the height value
 * Return: int value
 */
int area(int base, int height)
{
	int area = 1.0/2 * base * height;

	return (area);
}
