#include <iostream>
using namespace std;
//function protoype
float commission(float sales);
/**
 * main - check the code
 * 
 * Return: always 0 success
 */
int main(void)
{
    float sales;
    string name;
    float comm;

    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter monthly total sales: ";
    cin>>sales;
    
    comm = commission(sales);

    cout<<"Name:\t\t"<<name<<endl;
    cout<<"Monthly sales:\t"<<sales<<endl;
    cout<<"Commission due:\t"<<comm<<endl;

    return (0);
}

/**
 * comission - this function will calculate the commission of a sales person
 * @sales: The sales amnt in KSH
 * Return: void
 */
float commission(float sales)
{
    float commission;

    if(sales <= 80000 && sales >= 20000)
    {
        commission = 0.02 * sales;
    }
    else if(sales <= 120000 && sales >= 80001)
    {
        commission = 0.05 * sales;
    }
    else if(sales > 120000)
    {
        commission = 0.1 * sales;
    }
    else{
        exit;
    }

    return (commission);
}