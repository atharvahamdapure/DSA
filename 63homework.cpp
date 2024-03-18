// Fibonacci Series .... Not cleared

#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 0)
        return -1;  // Invalid Input

    if (n == 1 || n == 2)
        return n - 1; // First 2 terms 

    int prev = 0;
    int curr = 1;
    int next;

    for (int i = 3; i <= n; i++)
    {
        next = prev + curr;
        prev = curr;
        curr = next;
    }

    return curr;
}

int main()
{
    int n;
    cout << "Enter the term number of the Fibonacci series: " << endl;
    cin >> n;

    int result = fibonacci(n);

    if (result != -1)
        cout << "The " << n << "th term of the Fibonacci series is: " << result << endl;
    else
        cout << "Invalid input. Please enter a positive integer greater than 0." << endl;

    return 0;
}
