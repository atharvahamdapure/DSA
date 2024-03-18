// Prime number using functions

#include <iostream>
using namespace std;

bool isPrime(int n)
{

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n) == true)
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not a prime number." << endl;
    }

    return 0;
}