// https://leetcode.com/problems/maximum-subarray/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int N = nums.size();
        int mx = *max_element(nums.begin(), nums.end());
        if (mx < 0) return mx;
        int cur = 0, ans = 0;
        for (int i=0;i<N;i++) {
            if (cur < 0) cur = 0;
            cur += nums[i];
            ans = max(ans, cur);
        }
        return ans;
    }
};