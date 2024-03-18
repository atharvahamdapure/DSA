// Code studio - Find unique element in an array

#include <iostream>
using namespace std;

int unique(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[10] = {2, 7, 6, 8, 8, 2, 6};

    cout << unique(arr, 7);

    return 0;
}