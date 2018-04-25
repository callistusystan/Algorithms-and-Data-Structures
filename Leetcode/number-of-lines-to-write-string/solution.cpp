// https://leetcode.com/problems/number-of-lines-to-write-string/description/

class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        int lines = 0, cur = 0;
        for (char c : S) {
            if (cur == 0) lines++;
            if (cur + widths[c-'a'] <= 100) {
                cur += widths[c-'a'];
            } else {
                lines++;
                cur = widths[c-'a'];
            }
        }
        return { lines, cur };
    }
};
