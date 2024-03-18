// Find number of occurences of n in an array

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
int nofoccurences(int arr[], int size, int n)
{
    int a = firstOcc(arr, size, n);
    int b = lastOcc(arr, size, n);
    return (b - a) + 1;
}

int main()
{
    int arr[100] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 5};
    int n = 15;
    int k = 5;

    cout << nofoccurences(arr, n, k);
    return 0;
}