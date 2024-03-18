// Print sum of all the elements in an array

#include <iostream>
using namespace std;

int sum(int arr[], int size)
{
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        ans = ans + arr[i];
    }
    return ans;
}
int main()
{
    int arr[100];
    int n;
    int ans = 0;
    cout << "Enter the size of array" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element " << i + 1 << endl;
        cin >> arr[i];
    }

    cout << "The sum of all the elements in the array is : " << sum(arr, n);

    return 0;
}