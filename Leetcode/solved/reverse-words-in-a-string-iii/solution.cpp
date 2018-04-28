// https://leetcode.com/problems/reverse-words-in-a-string-iii/description/

class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);

        string res, si;
        bool first = true;
        while (ss >> si) {
            if (!first) res += " ";
            reverse(si.begin(), si.end());
            res += si;
            first = false;
        }
        return res;
    }
};
