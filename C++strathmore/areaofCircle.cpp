#include <cstdio>
#include <cmath>
//Function prototype
void area(float radius);
void perimeter(float radius);

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	float radius = 6;

	area(radius);
	perimeter(radius);

	return (0);
}

/**
 * area - this function will calculate the area of the circle
 * @radius: will hold the radius value
 * Return: void
 */
void area(float radius)
{
	float area;
	area = 22.0/7 * radius * radius;
	printf("The area of the cirlce is %.3f\n", area);
}
/**
 * perimeter - this function will calculate the perimeter of the cirlce
 * @radius: will hold the radius value
 * Return: void
 */
void perimeter(float radius)
{
	float perimeter;
	perimeter = 22.0/7 * radius * 2;
	printf("The perimeter of the triangle is %.3f\n", perimeter);
}
