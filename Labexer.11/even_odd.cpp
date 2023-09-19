#include <iostream>
using namespace std;

// function prototype
void even_odd(int number);

int main(void)
{
    int number;

    cout<<"Enter a number so that it can be determined whether it is even or odd"<<endl;
    cin>>number;

    even_odd(number);

    return (0);
}

void even_odd(int number)
{
    if(number % 2 == 0)
    {
        cout<<"Number is even"<<endl;
    }

    else if(number %2 != 0)
    {
        cout<<"Number is odd"<<endl;
    }

    else{
        cout<<"Invalid input"<<endl;
    }

    return;
}

