// https://leetcode.com/problems/detect-capital/description/

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool allUpper = true, allLower = true;
        int N = word.size();
        for (int i=1;i<N;i++) {
            if (isupper(word[i])) allLower = false;
            else allUpper = false;
        }        
        if (allLower) return true;
        return isupper(word[0]) && allUpper;
    }
};