// Sort zeroes and ones in an array

#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            cout << 0 << " ";
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            cout << 1 << " ";
        }
    }
}

int main()
{
    int arr[12] = {0, 1, 0, 1, 0, 1, 0, 1};
    sort(arr, 8);
    return 0;
}
