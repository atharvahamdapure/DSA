// Even or Odd using function

#include <iostream>
using namespace std;

bool check(int n)
{
    if (n % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cin >> n;

    check(n);
    if (check(n) == true)
    {
        cout << "Even number" << endl;
    }
    else
    {
        cout << "Odd number" << endl;
    }

    return 0;
}