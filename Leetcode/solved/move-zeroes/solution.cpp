// https://leetcode.com/problems/move-zeroes/description/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int N = nums.size();
        int front = 0;
        for (int i=0;i<N;i++)
            if (nums[i]) swap(nums[i], nums[front++]);
    }
};