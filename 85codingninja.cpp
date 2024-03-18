// Find the first and last occurence position of an element in an sorted array
// https://www.codingninjas.com/studio/problems/first-and-last-position-of-an-element-in-sorted-array_1082549
#include <iostream>
using namespace std;

int firstOcc(int arr[], int size, int n)
{
    int ans = -1; // ans is declared -1 becoz if the element does not exist in array ans will be -1
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == n)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (arr[mid] > n)
        {
            end = mid - 1;
        }
        else if (arr[mid] < n)
        {
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int size, int n)
{
    int ans = -1; // ans is declared -1 becoz if the element does not exist in array ans will be -1
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {

        if (arr[mid] == n)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] > n)
        {
            end = mid - 1;
        }
        else if (arr[mid] < n)
        {
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[6] = {1, 3, 3, 3, 4, 5};
    cout << firstOcc(even, 6, 3) << endl;
    cout << lastOcc(even, 6, 3);
    return 0;
}