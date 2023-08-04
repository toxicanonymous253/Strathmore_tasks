#include <cstdio>

int area(int len, int wid);

int main(void){

	int len = 5;
	int wid = 3;

	int mul = area(len, wid);

	printf("area = %d\n", mul);

	return (0);
}

int area(int len, int wid)
{
	int mul = len * wid;

	return (mul);
}

