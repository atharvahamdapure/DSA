// Find the pair of elements in an array which gives a particular sum
// Pair sum problem

#include <iostream>
using namespace std;

void pairsum(int arr[], int size, int n)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[i] + arr[j] == n))
            {
                cout << arr[i] << " and " << arr[j] << endl;
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

    pairsum(arr, 5, n);
    return 0;
}