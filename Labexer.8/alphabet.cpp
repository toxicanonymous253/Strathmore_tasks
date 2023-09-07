#include <iostream>
using namespace std;
// printing alphapets in order in uppercase
int main(void)
{
    int i;

    for (i = 65; i <= 90; i++)
    {
        char uppercase = static_cast<char>(i);
        cout << " "<<uppercase;
    }

    cout<<"\n";

    return (0);
}