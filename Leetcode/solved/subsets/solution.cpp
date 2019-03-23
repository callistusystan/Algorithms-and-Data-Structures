// https://leetcode.com/problems/subsets/description/

class Solution {
public:
    void rec(int idx, vector<int> &cur, vector<int> &nums, vector<vector<int>> &ans) {
        if (idx == (int)nums.size()) return ans.push_back(cur);
        rec(idx+1, cur, nums, ans);
        cur.push_back(nums[idx]);
        rec(idx+1, cur, nums, ans);
        cur.pop_back();
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> cur;
        rec(0, cur, nums, ans);
        return ans;
    }
};