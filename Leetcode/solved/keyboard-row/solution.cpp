// https://leetcode.com/problems/keyboard-row/description/

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string keyboard[3] = {
            "qwertyuiop",
            "asdfghjkl",
            "zxcvbnm"
        };

        vector<string> res;
        for (string word : words) {
            set<int> rowsUsed;
            for (char c : word) {
                for (int i=0;i<3;i++) {
                    if (keyboard[i].find(c) != string::npos) {
                        rowsUsed.insert(i);
                        break;
                    }
                }
            }
            if (rowsUsed.size() == 1) res.push_back(word);
        }
        return res;
    }
};
