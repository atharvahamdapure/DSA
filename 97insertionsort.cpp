#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void insertionSort(int n, vector<int> &arr)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                // Shift
                arr[j + 1] = arr[j];
            }
            else
            {
                // Ruk jao
                break;
            }
        }
        arr[j + 1] = temp;
    }
    print(arr);
}

int main()
{
    vector<int> arr = {8, 22, 7, 9, 31, 5, 13};
    insertionSort(arr.size(), arr);
    return 0;
}