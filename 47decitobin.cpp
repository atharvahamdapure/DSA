// Convert decimal to binary

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    int n;
    int ans = 0;
    int i = 1;
    cout << "Enter a decimal number : " << endl;
    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;

        ans = ans + (bit * i);
        n = n >> 1;

        i = i * 10;
    }

    cout << "Answer is " << ans << endl;

    return 0;
}