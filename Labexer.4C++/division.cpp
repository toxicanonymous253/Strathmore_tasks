#include <cstdio>
//function prototype
void division(float i, float j);

/**
 * main - check the code
 * Return: always 0
 */

int main(void)
{
    float i, j;
    printf("Input 2 integers: ");
    scanf("%f %f", &i, &j);

    division(i, j);

    return (0);
}

/**
 * division - this will divide the integers inputed by the user
 * 
 * @i: This is the integer to be divided
 * @j: This is the divisor
 * Return: void
 */

void division(float i, float j)
{
    if (j != 0)
    {
        float div = i / j;
        printf("The division is %f\n", div);
    }
    else{
        printf("Cannot divide by zero\n");
    }
}
