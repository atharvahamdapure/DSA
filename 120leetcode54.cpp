// Leetcode 54 - Spiral Matrix 

#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int row = matrix.size();

        if (row == 0)
        {
            return ans;
        }

        int col = matrix[0].size();
        int total = row * col;

        int startingRow = 0, endingRow = row - 1;
        int startingCol = 0, endingCol = col - 1;

        while (ans.size() < total)
        {
            // Traverse right
            for (int index = startingCol; index <= endingCol; ++index)
            {
                ans.push_back(matrix[startingRow][index]);
            }
            startingRow++;

            // Traverse down
            for (int index = startingRow; index <= endingRow; ++index)
            {
                ans.push_back(matrix[index][endingCol]);
            }
            endingCol--;

            // Traverse left
            if (startingRow <= endingRow)
            {
                for (int index = endingCol; index >= startingCol; --index)
                {
                    ans.push_back(matrix[endingRow][index]);
                }
                endingRow--;
            }

            // Traverse up
            if (startingCol <= endingCol)
            {
                for (int index = endingRow; index >= startingRow; --index)
                {
                    ans.push_back(matrix[index][startingCol]);
                }
                startingCol++;
            }
        }

        return ans;
    }
};

int main()
{

    return 0;
}