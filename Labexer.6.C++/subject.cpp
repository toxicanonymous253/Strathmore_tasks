#include <iostream>
using namespace std;
//function prototype
void grade(int average);
int average(int subjects[], int size);

/**
 * main - check the code
 * 
 * Return: 0 when successful
 */

int main(void)
{
    int subjects[5], i;

    cout<<"Enter the marks of Physics, Chemistry, Biology, Mathematics and Computer respectively ";

    for (i = 0; i < 5; i++)
    {
        cin>>subjects[i];
    }

    int aver = average(subjects, 5);
    grade(aver);

    return (0);
}


/**
 * grade - this function will grade percentage scores
 * @percent: the percent to be graded
 * Return: void
 */
void grade(int average)
{
    if(average <= 100 && average >=90)
    {
        cout<<"Grade A"<<endl;
    }
    else if(average < 90 && average >= 80)
    {
        cout<<"Grade B"<<endl;
    }
    else if(average < 80 && average >= 70)
    {
        cout<<"Grad C"<<endl;
    }
    else if(average < 70 && average >= 60)
    {
        cout<<"Grade D"<<endl;
    }
    else if(average < 60 && average >= 40)
    {
        cout<<"Grade E"<<endl;
    }
    else if(average < 40 && average >= 0)
    {
        cout<<"Grade F"<<endl;
    }
    else
    {
        cout<<"invalid input"<<endl;
    }
    return;
}

/**
 * average - This is a function that will get the average of the subjects
 * @subjects: The marks of each subject
 * @size: size of the array
 * Return: average
 */
int average(int subjects[], int size)
{
    int iterator, sum = 0, aver;

    for (iterator = 0; iterator < size; iterator++)
    {
        sum += subjects[iterator];
    }
    aver = sum / size;

    return (aver);
}
