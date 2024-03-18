#include <iostream>
using namespace std;

int HCF(int a, int b)
{

    for (int i = INT32_MAX; i > INT32_MIN; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{
    int a = 24 , b = 36;

    cout<<HCF(24,36);
    return 0;
}