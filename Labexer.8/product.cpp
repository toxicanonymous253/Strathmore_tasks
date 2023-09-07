#include <iostream>
using namespace std;

// program that will do product
int main(void)
{
    int first = 1, last = 5, product = 1;

    while(first <= last)
    {
        if (first == 0)
        {
            product = 0;
            break;
        }
        product *= first;
        first++;
    }
    cout<<product<<endl;


    return (0);
}
