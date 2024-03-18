// Leetcode 7 -> Reverse Integer

#include <iostream>
using namespace std;

class Solution
{
public:
    int reverse(int x)

    {
        int answer = 0;
        while (x != 0)
        {
            int digit = x % 10;

            if ((answer > INT32_MAX / 10) || (answer < INT32_MIN / 10))
            {
                return 0;
            }
            answer = (answer * 10) + digit;
            x = x / 10;
        }
        return answer;
    }
};

int main()
{

    Solution s;
    cout << s.reverse(1929);

    return 0;
}