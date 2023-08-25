#include <iostream>
using namespace std;

void grade(float gpa);
/**
 * main - check the code
 * 
 * Return: always 0 success
 */
int main(void)
{
    float gpa;
    cout<<"Enter your gpa: ";

    cin>>gpa;

    grade(gpa);

    return (0);
}

/**
 * grad - this function checks if a gpa has met a certain condition
 * @gpa: The gpa to be checked
 * Return: void
 */
void grade(float gpa)
{
    if (gpa >= 3.5)
    {
        cout<<"Congrats you have made it to the deans listn\n";
    }
    else if(gpa >= 2.0 && gpa < 3.5)
    {
        cout<<"Your gpa is okay\n";
    }
    else if(gpa < 2.0)
    {
        cout<<"See the course administrator\n";
    }
}
