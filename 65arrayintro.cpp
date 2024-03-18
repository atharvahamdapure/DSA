#include <iostream>
using namespace std;

void printarray(int n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << n[i] << endl;
    }
}

int main()
{
    // Declaring an array
    int number[15];

    // Accessing an array
    cout << "Value at 0 index " << number[0] << endl;

    // Initialising an array
    int second[4] = {5, 7, 11};

    // Accessing an element
    cout << "Value at 2 index " << second[2] << endl;

    int third[15] = {7, 8, 6};

    // Print the array

    for (int i = 0; i < 15; i++)
    {
        cout << third[i] << " ";
    }

    int fourth[10] = {0}; // In itializing all locations with zero

    int size = sizeof(fourth) / sizeof(int);
    // cout<<sizeof(fourth)<<endl;
    // for (int i = 0; i < 10 ; i++)
    // {
    //     cout<<fourth[i]<<" ";
    // }

    // Printing the array using function
    printarray(fourth, size);

    return 0;
}