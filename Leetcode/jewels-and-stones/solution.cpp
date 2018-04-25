// https://leetcode.com/problems/jewels-and-stones/description/

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        for (char c : J) ans += count(S.begin(), S.end(), c);
        return ans;
    }
};
