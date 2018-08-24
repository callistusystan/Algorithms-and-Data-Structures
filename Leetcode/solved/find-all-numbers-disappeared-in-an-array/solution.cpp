// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/description/

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int N = nums.size();
        for (int i=0;i<N;i++) {
            while (nums[i] != i+1 && nums[nums[i]-1] != nums[i]) {
                swap(nums[i], nums[nums[i]-1]);
            }
        }
        
        vector<int> ans;
        for (int i=0;i<N;i++) {
            if (nums[i] != i+1) {
                ans.push_back(i+1);
            }
        }
        return ans;        
    }
};