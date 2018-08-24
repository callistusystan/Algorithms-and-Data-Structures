// https://leetcode.com/problems/house-robber/description/

class Solution {
public:
    int rob(vector<int>& nums) {
        int N = nums.size();
        vector<int> dp(3);
        for (int i=0;i<N;i++)
            dp[i%3] = max(nums[i] + dp[(i-2+3)%3], dp[(i-1+3)%3]);
        return dp[(N-1)%3];
    }
};