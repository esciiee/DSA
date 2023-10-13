//solve the number of 1 bits problem using right shift logic
//basically ny right shifting a binary number by n, we are dividing it by 2^n
//so if we right shift a number by 1, we are dividing it by 2
//and the remainder is the last bit of the binary number
//so we can count the number of 1 bits by right shifting the number by 1

#include<iostream>
using namespace std;
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        while (n != 0) {
            count += (n & 1); 
            n >>= 1;         
        }
        return count;
    }
};
int main()
{
    Solution s;
    s.hammingWeight(11);
    return 0;
}

