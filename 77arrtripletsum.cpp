// Find the triplet of elements in an array which gives a particular sum
// Triplet sum problem

#include <iostream>
using namespace std;

void tripletsum(int arr[], int size, int n)
{

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            for (int k = 0; k < j; k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    cout << arr[i] << " , " << arr[j] << " and " << arr[k] << endl;
                }
            }
        }
    }
}

int main()
{
    int arr[10] = {2, 3, 8, 19, 12};
    int n;
    cout << "Enter the sum : " << endl;
    cin >> n;

    tripletsum(arr, 5, n);
    return 0;
}