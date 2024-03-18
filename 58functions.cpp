// nCr using functions

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int ncr(int n, int r)
{
    int ans = factorial(n) / ((factorial(r) * factorial(n - r)));
    return ans;
}

int main()
{
    int n = 10;
    int r = 10;

    cout << ncr(n, r);

    return 0;
}