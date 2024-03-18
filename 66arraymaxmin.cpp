// Maximum / Minimum in an array

#include <iostream>
using namespace std;

int getmax(int num[], int size)
{
    int maxi = INT32_MIN;
    for (int i = 0; i < size; i++)
    {
        maxi = max(num[i], maxi);
        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }
    return maxi;
}

int getmin(int num[], int size)
{
    int mini = INT32_MAX;
    for (int i = 0; i < size; i++)
    {
        mini = min(num[i], mini);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return mini;
}

int main()
{

    int size;
    cin >> size;

    int num[100];
    // Taking input
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum value is " << getmax(num, size) << endl;
    cout << "Minimum value is " << getmin(num, size) << endl;
    return 0;
}