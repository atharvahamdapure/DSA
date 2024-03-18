// Convert negative decimal number to binary number
// INCOMPLETE
#include <iostream>
using namespace std;

int main()
{
    int n;
    int bit;
    int k;
    int answer = 0;
    int i = 1;
    cout << "Enter a decimal number : " << endl;
    cin >> n;

    while (n != 0)
    {
        bit = n & 1;
        answer = answer + (bit * i);
        n = n >> 1;
        i = i * 10;
    }
    cout << ~answer << endl;



    return 0;
}