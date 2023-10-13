#include<iostream>
#include<cmath>
using namespace std;
class Solution {
public:
    int bitwiseComplement(int n) {
        int answer = 0, count = 0;
        answer = (!n) ? 1 : 0;
        while(n > 0)
        {
            answer += (!(n&1)) ? 2>>count : 0;
            n >>= 1;
            count++;
        }
        return answer;
    }
};