// https://leetcode.com/problems/shortest-unsorted-continuous-subarray/description/

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int N = nums.size();
        int left = N-1, right = 0;
        int best = nums[0];
        bool isSorted = true;
        for (int i=1;i<N;i++) {
            isSorted = isSorted && nums[i] >= nums[i-1];
            if (nums[i] < best) right = i;
            best = max(best, nums[i]);
        }
        if (isSorted) return 0;
        best = nums[N-1];
        for (int i=N-1;i>=0;i--) {
            if (nums[i] > best) left = i;
            best = min(best, nums[i]);
        }
        return right-left+1;
    }
};