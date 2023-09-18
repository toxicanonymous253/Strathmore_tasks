#include <iostream>
using namespace std;

// function prototypes
int average(int marks);

/**
 * main - checks the code
 * Return: 0 always
 */
int main(void)
{
    int Average;

    cout<<"Enter your average: ";
    cin>>Average;

    int total = average(Average);
    cout<<"Quality poihnts: "<<total<<endl;

    return (0);
}

/**
 * average - this function will classify the average of the student
 * @average: the average of the student
 * Return: 0, 1, 2, 3 or 4
 */
int average(int Average)
{
    if (Average <= 100 && Average >= 90)
    {
        return (4);
    }
    else if(Average <= 89 && Average >= 80)
    {
        return (3);
    }
    else if(Average <= 79 && Average >= 70)
    {
        return (2);
    }
    else if(Average <= 69 && Average >= 60)
    {
        return (1);
    }
    else if(Average <= 60 && Average >= 0)
    {
        return (0);
    }
    else
    {
        cout<<"Invalid input"<<endl;
        return (-1);
    }
}
