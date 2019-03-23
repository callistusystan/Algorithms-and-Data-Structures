// https://leetcode.com/problems/find-the-difference/description/

class Solution {
public:
    char findTheDifference(string s, string t) {
        int mask = 0;
        for (char c : s) mask ^= c;
        for (char c : t) mask ^= c;
        return mask;
    }
};