#include <bits/stdc++.h>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

vector<int> ans(vector<int> arr)
{
    int n = arr.size();
    int zeroCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[zeroCount] = arr[i];
            if (zeroCount != i)
            {
                arr[i] = 0;
            }
            zeroCount++;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 0, 3, 12};
    print(ans(arr));
    return 0;
}