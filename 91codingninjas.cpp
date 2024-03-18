// https://www.codingninjas.com/studio/problems/square-root_893351?source=youtube&campaign=love_babbar_codestudio2
// Find the square root using binary search

#include <iostream>
using namespace std;

long long int sqrtinterger(int n)
{
    int start = 0;
    int end = n - 1;
    long long int mid = start + (end - start) / 2;

    long long int ans = -1; // -1 is taken because if the value doesnt exist it will return -1

    while (start <= end)
    {
        long long int square = mid * mid; // here long long is used because if mid=int_max then int_max*int_max will number above the limit ; long long is used to store large integer values

        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            end = mid - 1;
        }
        else if (square < n)
        {
            ans = mid;
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;
        // 0.1 -> i = 0
        // 0.01 -> i = 1
        // 0.001 -> i = 2

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
            // 6 + 0.1 ;
            // 
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;

    int tempSol = sqrtinterger(n); // square root of n
    cout << morePrecision(n, 3, tempSol);
    return 0;
}
