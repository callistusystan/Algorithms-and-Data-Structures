// https://leetcode.com/problems/find-all-anagrams-in-a-string/description/

class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int N = s.size(), M = p.size();
        vector<int> countP(26);
        for (char c : p) countP[c-'a']++;
        vector<int> ans, window(26);
        for (int i=0;i<M-1;i++) window[s[i]-'a']++;
        for (int i=0;i+M-1<N;i++) {
            window[s[i+M-1]-'a']++;
            if (i) window[s[i-1]-'a']--;
            if (window == countP) ans.push_back(i);
        }
        return ans;
    }
};