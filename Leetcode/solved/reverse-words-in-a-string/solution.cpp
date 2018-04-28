// https://leetcode.com/problems/reverse-words-in-a-string/description/

class Solution {
public:
    void reverseWords(string &s) {
        while (s.size() && s.back() == ' ') s.pop_back();
        reverse(s.begin(), s.end());
        while (s.size() && s.back() == ' ') s.pop_back();
        int N = s.size();
        int i = 0, j = 0;
        while (i < N) {
            while (j < N && s[j] != ' ') j++;
            reverse(s.begin()+i, s.begin()+j);
            i = j+1;
            j++;
        }
        i = j = 0;
        while (j < N) {
            s[i] = s[j];
                i++;
            if (s[j] == ' ') {
                while (j < N && s[j] == ' ') j++;
            } else j++;
        }
        while ((int)s.size() > i) s.pop_back();
    }
};
