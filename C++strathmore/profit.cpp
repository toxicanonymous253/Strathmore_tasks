#include <cstdio>
//Function prototype
int profit(int bp, int sp);

/**
 * main - check the code
 * Retrun: always 0 when successful
 */
int main(void)
{
	int bp = 450000;
	int sp = 580000;

	int answer = profit(bp, sp);

	printf("The profit made is %d\n", answer);
	return (0);
}

/**
 * profit - this function will calculate the profit
 * @bp: this will store the buhying price
 * @sp: this will store the selling price
 * Return: the answetr gotten after subtracting sp and bp
 */
int profit(int bp, int sp)
{
	int ans = sp - bp;

	return (ans);
}
