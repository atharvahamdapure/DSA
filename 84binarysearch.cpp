// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{

    int start = 0;
    int end = size - 1;
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

int main()
{
    int even[6] = {2, 4, 9, 16, 72, 76};
    int odd[5] = {3, 8, 11, 14, 16};

    int index = binarySearch(odd, 5, 11);
    cout << "Index is : " << index;
    return 0;
}