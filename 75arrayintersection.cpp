// Array intersection (print the same elements from both the array)

#include <iostream>

using namespace std;

void arrintersec(int arr[], int sizearr, int narr[], int sizenarr)
{
    for (int i = 0; i < sizearr; i++)
    {
        int j;
        for (j = 0; j < sizenarr; j++)
        {
            if (narr[j] == arr[i])
            {
                cout << narr[j] << " ";
            }
            
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 2, 2, 3, 4};
    int narr[10] = {2, 2, 3, 3};

    arrintersec(arr, 6, narr, 4);
    return 0;
}