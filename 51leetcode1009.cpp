// Leetcode 1009 - Complement of Base 10 Integer (1'es compliment)

#include <iostream>
using namespace std;
class Solution
{
public:
    int bitwiseComplement(int n)
    {
        int m = n;
        int mask = 0;

        while (m != 0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }
        int ans = (~n) & mask;
        return ans;
    }
};
int main()
{
    Solution s;
    cout << s.bitwiseComplement(10);

    return 0;
}