// Leetcode 69 (Square root using binary search)

#include <iostream>
using namespace std;

int binary(int arr[], int size )
{
    int start = 1;
    int end = size - 1 ;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (mid*mid == arr[mid])
        {
            return mid;
        }
        else if (mid*mid > arr[end])
        {
            end = mid - 1;
        }
        else 
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
}

int main()
{
    int arr[100];
    binary(arr,36);

    return 0;
}