#include <iostream>
#include <vector>
using namespace std;

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void moveZeroes(vector<int> &nums)
{
    int nonZero = 0;
    for (int j = 0; j < nums.size(); j++)
    {
        if (nums[j] != 0)
        {
            swap(nums[j], nums[nonZero]);
            nonZero++;
        }
    }
    print(nums);
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 0, 3, 12};
    moveZeroes(arr);
    return 0;
}