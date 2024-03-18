/*
    Fibonacci Series

    0 , 1 , 1 , 2 , 3 , 5 . . . .

*/

#include <iostream>
using namespace std;

int main()
{

    int sum = 1;
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    // cout << 0 << endl;
    // cout << 1 << endl;

    for (int i = 2; i <= n; i++)
        {
            sum = sum + i; // s = 0 + 0 -> s = 0 + 1 -> s = 1 + 2
            cout << sum << endl;
        }

    return 0;
}
