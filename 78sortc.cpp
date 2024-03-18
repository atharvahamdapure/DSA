#include <iostream>
using namespace std;

void sort012(int arr[], int size)
{
    int low = 0;         // Pointer for 0s
    int high = size - 1; // Pointer for 2s
    int i = 0;           // Current index

    while (i <= high)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[low]);
            i++;
            low++;
        }
        else if (arr[i] == 2)
        {
            swap(arr[i], arr[high]);
            high--;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int arr[10] = {0, 2, 2, 1, 0, 1, 1, 0, 2};
    int size = 9;

    sort012(arr, size);

    // Printing the sorted array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
