#include <cstdio>

//This is a program that gets the age of Peter in 2019

#define CURR_YR 2019
#define YR_BORN 1954

int main(void)
{
	int age = CURR_YR - YR_BORN;

	printf("Peter is %d year\n", age);
}
