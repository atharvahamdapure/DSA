// Subtract the product and sum of digits of an integer

#include <iostream>
using namespace std;
class difference
{
public:
    int product = 1;
    int sum = 0;
    int subtract(int n)
    {
        while (n != 0)
        {
            int digit = n % 10;
            product = product * digit;
            sum = sum + digit;

            n = n / 10;
        }
        int answer = product - sum;
        return answer;
    }
};

int main()
{
    difference d;
    cout << d.subtract(234);

    return 0;
};
