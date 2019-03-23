// https://leetcode.com/problems/binary-number-with-alternating-bits/description/

class Solution {
public:
    bool hasAlternatingBits(int n) {
        int cur = n&1;
        while (n > 0) {
            if ((n&1) != cur) return false;
            n >>= 1;
            cur = 1 - cur;
        }
        return true;        
    }
};