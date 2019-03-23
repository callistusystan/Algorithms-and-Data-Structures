// https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        string left = "({[", right = ")}]";
        stack<char> st;
        for (char c : s) {
            if (left.find(c) != string::npos) st.push(c);
            else {
                int i = right.find(c);
                if (st.empty() || st.top() != left[i]) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};