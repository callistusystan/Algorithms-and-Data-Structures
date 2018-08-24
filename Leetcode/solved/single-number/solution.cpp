// https://leetcode.com/problems/single-number/description/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int mask = 0;
        for (int i: nums) mask ^= i;
        return mask;        
    }
};