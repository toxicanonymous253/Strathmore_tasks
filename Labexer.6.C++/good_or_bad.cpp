#include <iostream>
using namespace std;

//main this code will print good or bad under cerain coditions
int main(void)
{
    int num;

    cout<<"Enter number: "<<endl;
    cin>>num;

    if (num >= 14 && num <= 72 || num > 103)
    {
        cout<<"good\n";
    }

    else
    {
        cout<<"bad";
    }

    return (0);
}
