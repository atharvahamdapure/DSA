/*
    1 2 3 4 5  5 4 3 2 1
    1 2 3 4 *  * 4 3 2 1
    1 2 3 * *  * * 3 2 1
    1 2 * * *  * * * 2 1
    1 * * * *  * * * * 1

*/

#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    // Printing First Triangle
    int row = 1;
    while (row <= n)
    {
        int count = n;
        int col = 1;
        while (col <= n - row + 1)
        {
            cout << col << " ";
            col = col + 1;
        }

        // Printing second triangle

        int start = 0;
        while (start <= n - col)
        {
            cout << "* ";
            start = start + 1;
        }

        // Printing third triangle
        int third = 2;
        while (third <= row)
        {
            cout << "* ";
            third = third + 1;
        }

        // Printing fourth triangle

        int fourth = 1;
        while (fourth <= n - row + 1)
        {
            cout << count << " ";
            count = count - 1;
            fourth = fourth + 1;
        }

        cout << endl;
        row = row + 1;
    }

    return 0;
}