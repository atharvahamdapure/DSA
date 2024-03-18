// Linear search

#include <iostream>
using namespace std;

bool lnrsearch(int arr[], int size, int n)
{

    for (int i = 0; i < size; i++)
    {
        if (n == arr[i])
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10] = {20, 1, 10, 26, 11, 29, 27, 5, 19, 15};
    int size = 10;
    int n;
    cout << "Enter element to check : " << endl;
    cin >> n;

    lnrsearch(arr, size, n);

    if (lnrsearch(arr, size, n) == true)
    {
        cout << "The n is present " << endl;
    }
    else
    {
        cout << "The n is not present " << endl;
    }

    return 0;
}