/*
    Draw this pattern
    A A A
    B B B
    C C C

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    char character = 'A';
    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= n)
        {
            cout << character << " ";
            col = col + 1;
        } 
        cout << endl;
        row = row + 1;
        character++;
    }

    return 0;
}