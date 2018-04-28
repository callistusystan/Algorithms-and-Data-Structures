// https://leetcode.com/problems/array-partition-i/description/

class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for (int i=0;i<(int)nums.size();i+=2) ans += nums[i];
        return ans;
    }
};
