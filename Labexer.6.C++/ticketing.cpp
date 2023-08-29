#include <iostream>

using namespace std;

// function prototype
int check_county(string county, int age);
/**
 * main - check the code
 * Return: Always 0 when success
 */
int main(void)
{
    int check_Age;
    string check_County;

    cout<<"Enter yoour age: ";
    cin>>check_Age;
    cout<<"Enter your county: ";
    cin>>check_County;
    
    int final_cost_county = check_county(check_County, check_Age);

    cout<<"Your total cost is: "<<final_cost_county<<endl;

    return (0);
}
/**
 * check_county - This is a function that will calculate cost based on age and place of residence
 * @county: The county an individual is residing in
 * @age: This is age of the individual
 */
int check_county(string county, int age)
{
    int cost, discount;
    if (county == "Kibwezi")
    {
        cost = 1000;
    }
    else if(age < 5)
    {
        cost = 0;
    }
    else if(age > 65)
    {
        discount = 0.5 * 1500;
        cost = 1500 - discount;
    }
    else if(age > 5 && age < 65)
    {
        cost = 1500;
    }
    else
    {
        cost = 1500;
    }
    return (cost);
}
