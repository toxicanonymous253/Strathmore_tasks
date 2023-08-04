#include <cstdio>

//function prototype

void convertDollarstoKSH(int dollars);

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
	int dollars = 500;

	convertDollarstoKSH(dollars);

	return (0);
}

/**
 * convertDollarstoKSH - this function coverts kenyan shillings to dollars
 * @dollars: this is the dollars to be converted to Kenyan Shillings
 * Return: void
 */

void convertDollarstoKSH(int dollars)
{
	float rate = 101.43;
	float ksh = dollars * rate;

	printf("500 Dollars is equivalent to %.0f Kenyan Shillings\n", ksh);
}
