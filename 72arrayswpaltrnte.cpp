// Swap alternate of an array

#include <iostream>
using namespace std;

void swapalternate(int arr[], int size)
{
    for (int i = 0; i < size; i = i + 2)
    {
        if (i + 1 < size)
        {
            // With the help of swap function
            swap(arr[i], arr[i + 1]);

            // Without the help of swap function
            // int temp = arr[i + 1];
            // arr[i + 1] = arr[i];
            // arr[i] = temp;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    // int arr[10] = {4, 6, 7, 8, 10, 12};  even
    int arr[10] = {4, 6, 7, 10, 12}; // odd
    int size = 5;

    swapalternate(arr, size);
    printArray(arr, size);

    return 0;
}