// https://leetcode.com/problems/to-lower-case/description/

class Solution {
public:
    string toLowerCase(string str) {
        for (int i=0;i<(int)str.size();i++) str[i] = tolower(str[i]);
        return str;
    }
};