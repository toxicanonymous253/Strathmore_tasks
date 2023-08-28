#include <iostream>
using namespace std;

int main(void)
{
    int units_consumed, toatal_bill;

    cout<<"Input electricity units consumed\n";
    cin>>units_consumed;

    if (units_consumed <= 50)
    {
        toatal_bill =  units_consumed * 10;
    }
    else if(units_consumed <= 150)
    {
        toatal_bill = 50 * 10 + (units_consumed - 50) * 20; 
    }
    else if(units_consumed <= 250)
    {
        toatal_bill = 50 * 10 
    }

    return (0);
}
