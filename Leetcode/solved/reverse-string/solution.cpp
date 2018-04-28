// https://leetcode.com/problems/reverse-string/description/

class Solution {
public:
    string reverseString(string s) {
        reverse(s.begin(), s.end());
        return s;
    }
};
