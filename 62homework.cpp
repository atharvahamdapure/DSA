// Find total number of set bits in a and b

#include <iostream>
using namespace std;

int setbits(int a, int b)
{

    int count = 0;
    int result = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {

            count++;
        }
        a = a >> 1;
    }
    // return count ;

    while (b != 0)
    {
        int bits = b & 1;
        if (bits == 1)
        {

            result++;
        }
        b = b >> 1;
    }
    // return result ;
    return (count + result);
}

int main()
{
    cout << setbits(2, 3);
    return 0;
}