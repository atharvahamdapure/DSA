// Array intersection of 2 sorted arrays

#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    int i = 0, j = 0;
    vector<int> ans;
    while (i < n && j < m)
    {

        if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

void Printarray(vector<int> &ans)
{
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    vector<int> v = {1, 2, 2, 2, 3, 4};
    vector<int> w = {2, 2, 3, 3};

    vector<int> ans = findArrayIntersection(v, 6, w, 4);
    Printarray(ans);
    return 0;
}