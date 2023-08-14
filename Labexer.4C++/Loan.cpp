#include <cstdio>
//function prototype
void simple_interest(float principal, float rate, float yrs);

/**
 * main - check the code
 * 
 * Return: always 0
 */
int main(void)
{
    float principal, rate, yrs;

    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter interest rate: ");
    scanf("%f", &rate);

    printf("Enter duration in yrs: ");
    scanf("%f", &yrs);

    simple_interest(principal, rate, yrs);

    return (0);
}

/**
 * simple_interest - this function will get the simple interest
 * @principal: this is the principal amt
 * @rate: This will hold the rate value
 * @yrs: This will hold the number of yrs
 */

void simple_interest(float principal, float rate, float yrs)
{
    float SI = principal * rate * (yrs / 100);

    printf("The simple interest is %f\n", SI);
}
