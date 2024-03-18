// Find Duplicate

#include <iostream>
#include <vector>
using namespace std;

int findDuplicate(vector<int> &arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }

    for (int i = 1; i < arr.size(); i++)
    {
        ans = ans ^ i;
    }
    return ans;
}

int main()
{
    vector<int> arr = {8, 7, 2, 5, 4, 7, 1, 3, 6};

    int duplicate = findDuplicate(arr);
    cout << "The duplicate element is: " << duplicate << endl;

    return 0;
}