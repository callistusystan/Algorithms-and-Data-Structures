// https://leetcode.com/problems/first-unique-character-in-a-string/description/

class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> count(26);
        for (char c : s) count[c-'a']++;
        for (int i=0;i<(int)s.size();i++) if (count[s[i]-'a'] == 1) return i;
        return -1;
    }
};