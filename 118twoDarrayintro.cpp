#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }
    return 0;
}

// To print row wise sum
void printSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum => " << endl;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

// To print col wise sum
void printColSum(int arr[][3], int row, int col)
{
    cout << "Printing Sum => " << endl;
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum = sum + arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int largestRowSum(int arr[][3], int row, int col)
{
    int maxi = INT32_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum = sum + arr[row][col];
        }
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }
    cout << "The maximum sum is " << maxi << endl;
    return row;
}

int main()
{

    // Create 2D array
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

    int arr[3][4];

    cout << "Enter the elements " << endl;
    // taking input -> row wise input
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
    }

    // // Taking input -> col wise input
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //      {
    //         cin >> arr[j][i];
    //     }
    // }

    // Print
    cout << "Printing the array : " << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }

    // Linear Search
    // cout << "Enter the element to search : " << endl;
    // int target;
    // cin >> target;

    // if (isPresent(arr, target, 3, 4))
    // {
    //     cout << "Element found " << endl;
    // }
    // else
    // {
    //     cout << "Element not found";
    // }

    // printColSum(arr, 3, 3);
    // int ansIndex = largestRowSum(arr, 3, 3);
    // cout << "Max row is at index " << ansIndex << endl;

    return 0;
}