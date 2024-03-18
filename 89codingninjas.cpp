// Search in rotated sorted array

#include <iostream>
#include <vector>
using namespace std;

int pivot(vector<int> &arr, int n)
{
    int start = 0;
    int end = n - 1;
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
    return start;
}

int binarySearch(vector<int> &arr, int s, int e, int key)
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

int search(vector<int> &arr, int n, int k)
{
    int getpivot = pivot(arr, n);
    if (k >= arr[getpivot] && k <= arr[n - 1])
    {
        return binarySearch(arr, getpivot, n - 1, k);
    }
    else
    {
        return binarySearch(arr, 0, getpivot - 1, k);
    }
}

int main()
{
    vector<int> arr = {5, 6, 7, 1, 2, 3};
    int size = arr.size();

    cout << search(arr, size, 2);
    return 0;
}
