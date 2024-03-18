/* Write a function that takes an unsigned integer 
   and returns the number of '1' bits it has . 
*/

#include<iostream>
using namespace std;

class Solution{
    public:
        int hammingweight(uint32_t n){
            int count = 0 ;
            while (n!=0)
            {
                // Checking last bit
                if (n& 1) // if n == 1 is true
                {
                    count++;
                }  
                n = n>>1; 
            }  
            return count;
        }
};

int main(){
    Solution s;
    cout<<s.hammingweight(10);
    return 0;
}