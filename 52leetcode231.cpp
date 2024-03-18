// Leetcode 231 - Power of 2
// 2 4 8 16 32

#include <iostream>
#include <math.h>
using namespace std;
class Solution
{
public:
    bool isPowerOfTwo(int n)
    {
        for (int i = 0; i <= 30; i++)
        {
            int ans = pow(2, i);

            if (ans == n)
            {
                return true;
            }
        }
        return false;
    }

};
int main()
{
    Solution s;
    bool ans = s.isPowerOfTwo(18);
    if(ans == true)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}
