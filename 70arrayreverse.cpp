// Reverse an array approach 1

#include <iostream>
using namespace std;

void printreverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {9, 7, 5, 3, 1};
    int size = 5;
    printreverse(arr, size);
    return 0;
}