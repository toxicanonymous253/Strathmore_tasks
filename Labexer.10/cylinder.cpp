#include <iostream>
using namespace std;

// function prototype
void volume(int radius, int height);

int main(void)
{
    int radius = 13;
    int height = 15;

    volume(radius, height);

    return (0);
} 
/**
 * volume - this function will be usede to calculate the volume of a cylinder
 * @radus: radius of the base of the cylinder
 * @height: height of the cylinder
 */
void volume(int radius, int height)
{
    int volume = 3.142 * radius * radius * height;

    cout<<"The volume is: "<<volume<<endl;

    return;
}
