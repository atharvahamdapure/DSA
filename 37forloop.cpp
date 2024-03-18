// FOR LOOP

#include <iostream>
using namespace std;

int main()
{
    /*
    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
    }
    */

    // For loop with multiple variables

    for (int a = 0, b = 1, c = 2; a >= 0 && b >= 1 && c >= 2; a--, b--, c--)
    {
        cout << a << " " << b << " " << c << " " << endl;
    }

    return 0;
}