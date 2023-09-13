#include <iostream>
using namespace std;

int main(void)
{
    int savings = 2;
    int iterator = 6;
    int total = 0;

    while (iterator > 0)
    {
        total += savings;
        savings *= 2;
        iterator--;
    }
    cout<<" "<< savings<<endl;

    return (0);
}