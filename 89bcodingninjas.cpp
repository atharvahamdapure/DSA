#include <iostream> // HOLD
using namespace std;

int binarySearch(int arr[], int s, int e, int key)
{
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }

        // Go to right wala part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    if (size % 2 == 0)
    {
        if (key >= arr[start] && key <= arr[mid]) // Key lies in the left half
        {
            binarySearch(arr, start, mid, key);
        }
        else if (key < arr[start] && key >= arr[mid + 1])
        {
            binarySearch(arr, mid + 1, end, key);
        }
        else
        {
            return -1;
        }
    }
    else
    {
        if (key >= arr[start] && key <= arr[mid]) // Key lies in the left half
        {
            binarySearch(arr, start, mid, key);
        }
        else if (key < arr[start] && key >= arr[mid + 1])
        {
            binarySearch(arr, mid + 1, end, key);
        }
        else
        {
            return -1;
        }
    }
}

int main()
{
    int arr[10] = {4, 5, 6, 7, 2, 3};
    int size = 6;

    cout << search(arr, size, 3);
    return 0;
}