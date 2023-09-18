#include <iostream>
using namespace std;

int main()
{
    int K = 5;
    int W = -2;
    int P;

    for (; W <= K; W += 2, K--) {
        P = W + K;
        cout << P << std::endl;
    }

    return 0;
}
