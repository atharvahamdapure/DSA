// Find the pivot element in the array

#include <iostream>
using namespace std;

int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end + start) / 2;

    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }
    return arr[start];
}

int main()
{
    int arr[100] = {5,6,7,8,9,10,2,3};

    cout << "Pivot is " << pivot(arr, 10);
    return 0;
}