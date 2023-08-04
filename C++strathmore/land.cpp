#include <cstdio>
/*Fucntion prototype*/
float land(float ha, float sons);

/**
 * main - check the code
 * Return: Always 0 when success
 */
int main(void)
{
	float ha = 20;
	float sons = 6;

	float equ = land(ha, sons);

	printf("Each son will get %.2f Ha of land\n", equ);

	return (0);
}

/**
 * land - this function will divide land equally among the sons
 * @ha: this is where the ha of the land will be stored
 * @sons: this is where the nunmber of sons will be stored
 * Return: The value that will be obtained after dividing will be returned
 */

float land(float ha, float sons)
{
	float portion = ha / sons;

	return (portion);
}
