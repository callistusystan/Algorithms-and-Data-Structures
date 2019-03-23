// https://leetcode.com/problems/max-consecutive-ones/description/

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int N = nums.size();
        int ans = 0, cur = 0;
        for (int i=0;i<N;i++) {
            if (nums[i] == 1) {
                cur++;
                ans = max(ans, cur);
            } else cur = 0;
        }
        return ans;        
    }
};