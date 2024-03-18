// https://www.codingninjas.com/studio/problems/painter-s-partition-problem_1089557
// Painters Partition Problem
// Pending Problem

#include <iostream>
#include <vector>
using namespace std;

int findLargestMinDistance(vector<int> &boards, int k)
{
    int start = 0;
    int sum = 0;
    for (int i = 0; i < boards.size(); i++)
    {
        sum = sum + boards[i];
    }
    int end = sum;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        // if (isPossible(arr, brds, pain))
        // {
        //     ans = mid;
        //     end = mid - 1;
        // }
        // else{

        // }
    }
}

int main()
{

    return 0;
}