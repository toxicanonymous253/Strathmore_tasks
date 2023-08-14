#include <cstdio>

void multiplication(float i, float j);

int main(void)
{
    float i, j;
    printf("Enter 2 digits: \n");
    scanf("%f %f", &i, &j);
    
    multiplication(i, j);

    return (0);
}

void multiplication(float i, float j)
{
    float multiply = i * j;
    printf("%f\n", multiply);
}
