#include <iostream>
using namespace std;
// calculate sum of the even numbers till 500
int main(void)
{
    int i;
    int sum = 0;

    for (i = 0; i < 501; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    cout<< sum;
    cout<<endl;
    return (0);
}
