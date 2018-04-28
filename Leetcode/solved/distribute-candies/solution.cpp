// https://leetcode.com/problems/distribute-candies/description/

class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        // count unique candies
        set<int> seen;
        for (int num : candies) seen.insert(num);
        return min(N/2, (int)seen.size());
    }
};
