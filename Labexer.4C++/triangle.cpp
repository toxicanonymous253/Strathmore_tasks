#include <cstdio>

void area_triangle(float base, float height);
void perimeter_triangle(float base, float height, float hypotenuse);

int main(void)
{
    float base, height, hypotenuse;
    unsigned int ch;

    do{
        printf("Enter height: ");
        scanf("%f", &height);
        printf("Enter hypotenuse: ");
        scanf("%f", &hypotenuse);
        printf("Enter base: ");
        scanf("%f", &base);
    }while(base < 0 || height < 0 || hypotenuse < 0);

    area_triangle(base, height);
    perimeter_triangle(base, height, hypotenuse);

    return (0);
}

void area_triangle(float base, float height)
{
    float area = 0.5 * base * height;

    printf("area: %f\n", area);
}


void perimeter_triangle(float base, float height, float hypotenuse)
{
    float perimeter = base + height + hypotenuse;

    printf("perimeter: %f\n", perimeter);
}
