#include <cstdio>
//function prototypes
void convert_to_metres(int centimeter);
void convert_to_Kilometers(float centimeter);

/**
 * main - check the code 
 * Return: always 0
 */

int main(void)
{
	float centimeters;

	centimeters = 10300;

	convert_to_metres(centimeters);
	convert_to_Kilometers(centimeters);

	return (0);
}

/**
 * convert_to_metres - this function will convert centimeters to meters
 * @distance: will hold the value to be converted
 * Return: void
 */

void convert_to_metres(int centimeter)
{
	int meters = centimeter / 100;
	printf("10300 centimeters are equivelent to %d Metres\n", meters);
}

/**
 * convert_to_kilometers - this function will convert centimeters to meters
 * @distance: will hold the value to be converted
 * Return: void
 */

void convert_to_Kilometers(float centimeter)
{
	float kilometers = centimeter / 100000;
	printf("10300 centimeters are equivelent to %.3f Kilometers\n", kilometers);
}
