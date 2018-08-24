// https://leetcode.com/problems/majority-element/description/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int N = nums.size();
        map<int, int> cnt;
        for (int el : nums) {
            cnt[el]++;
            if (cnt[el] > N/2) return el;
        }
        return 0;
    }
};