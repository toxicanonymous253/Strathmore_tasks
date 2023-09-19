#include <iostream>
#include <iomanip>
using namespace std;

// function prototype
void calcAverage(int mark1, int mark2, int mark3);

int main(void)
{
    int mark1, mark2, mark3;

    cout<<"Enter your marks: ";
    cin>>mark1>>mark2>>mark3;

    calcAverage(mark1, mark2, mark3);

    return (0);
}

void calcAverage(int mark1, int mark2, int mark3)
{
    float average = (mark1 + mark2 + mark3) / 3;

    cout<<fixed<<setprecision(2)<<average<<endl;

    return;
}
