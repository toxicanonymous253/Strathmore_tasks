#include <iostream>
using namespace std;

int main(void)
{
    int degrees_celcius, farenheit;

    cout <<"Enter degrees celcius: ";
    cin>>degrees_celcius;

    farenheit = (degrees_celcius * 9/5) + 32;

    cout<<"The Farenheit is: "<<farenheit<<endl;


    return (0);
}