#include <iostream>
using namespace std;
// function prototypes
bool isleap_yr(int yarr);
bool is_valid_date(int mth, int day, int year);

int main(void)
{
    int mth, day, year;

    cout<<"Enter mth, day and year in numeric form: ";
    cin>> mth>> day>> year;

    if (is_valid_date(mth, day, year))
    {
        cout<<"Valid date"<<endl;
    }
    else
    {
        cout<<"Invalid date"<<endl;
    }
    return (0);
}

bool isleap_yr(int year)
{
    return (year % 4 == 0 && year % 100 != 0 || (year % 400 == 0));
}
bool is_valid_date(int mth, int day, int year)
{
    if (mth < 1 || mth < 12 || day < 1)
    {
        return (false);
    }
    if (mth == 2)
    {
        if (isleap_yr(year))
        {
            return (day <= 29);
        }
        else
        {
            return (day <= 28);
        }
    }
    else if (mth == 4 || mth == 6 || mth == 9 || mth == 11)
    {
        return (day <= 30);
    }
    else
    {
        return (day <= 31);
    }
}
