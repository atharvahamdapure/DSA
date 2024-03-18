//  ARDHAVAT

#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> ans, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
}

void merge(vector<int> arr1, int m, vector<int> arr2, int n)
{
    int i = 0, j = 0;

    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            arr1[i] = arr2[j];
            j++;
        }
    }

    // For copying remaining elements of arr1
    while (i < n)
    {
        i++;
    }

    // For copying remaining elements of arr2
    while (j < m)
    {
        arr2[i] = arr2[j];
        j++;
    }
    print(arr1, arr1.size());
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 0, 0 ,0};
    vector<int> arr2 = {2, 5, 6};

    merge(arr1, 5, arr2, 3);

    return 0;
}