#include <iostream>
using namespace std;
// function prototypes
int check_accidents(int accidents, int basic_insurance);
int check_age(int age, int basic_insurance);
/**
 * main - check the code
 * Return: 0 always
 */
int main(void)
{
    int basic_insurance = 20000;
    int accidents, age;

    cout<<"Enter your age: ";
    cin>>age;

    cout<<"Number of accidents: ";
    cin>>accidents;

    int final_insurance_accidents = check_accidents(accidents, basic_insurance);
    int final_insurance_age = check_age(age, basic_insurance);

    int final_insurance = final_insurance_accidents + final_insurance_age;
    cout<<"Final insurance: "<<final_insurance <<endl;

    return (0);
}
/**
 * check_accidents - this will chek the number of accidents done by the driver
 * 
 * @accidents: number of accidents
 * @basic_insurance: the basic insurance of the insuarance company
 * Return: void
 */
int check_accidents(int accidents, int basic_insurance)
{
    int final_insurance = basic_insurance;
    if (accidents == 1)
    {
        final_insurance += 4250;
    }
    else if (accidents == 2)
    {
        final_insurance += 10600;
    }
    else if (accidents == 3)
    {
        final_insurance += 19100;
    }
    else if(accidents >= 4)
    {
        cout<<"No insurance due\n";
        final_insurance = 0; // assuming no insurance
    }
    else
    {
        cout<<"Invalid input for accidents\n";
        final_insurance = 0; // invalid input, no insurance
    }
    return (final_insurance);
}
/**
 * check_age - this will chek the age of the driver
 * @age: age of the driver
 * @basic_insurance: basic insurance of the insurance company
 * Return: void
 */
int check_age(int age, int basic_insurance)
{
    int final_insurance = basic_insurance;
    if (age < 25)
    {
        final_insurance += 8000;
    }
    else
    {
        cout<<"No surcharge\n";
    }
    return (final_insurance);
}
