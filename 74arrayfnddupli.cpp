// Find duplicate elements from the array

#include <iostream>
using namespace std;

void printunique(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                cout << arr[j] << " ";
                break;
            }
        }
    }
}

int main()
{

    int arr[100] = { 9, 9, 9, 8, 8, 8, 7, 7, 7, 6, 4, 2, 2, 1};
    int size = 13;

    cout << "Duplicate elements in the array are : " << endl;
    printunique(arr, size);
    return 0;
}