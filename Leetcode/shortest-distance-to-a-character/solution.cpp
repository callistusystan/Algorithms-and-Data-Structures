// https://leetcode.com/problems/shortest-distance-to-a-character/description/

class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        int N = S.size();
        vector<int> left(N, -1), right(N, -1);
        int last = -1;
        for (int i=0;i<N;i++) {
            if (S[i] == C) last = i;
            left[i] = last;
        }
        last = -1;
        for (int i=N-1;i>=0;i--) {
            if (S[i] == C) last = i;
            right[i] = last;
        }
        vector<int> ans(N);
        for (int i=0;i<N;i++) {
            if (left[i] == -1) ans[i] = right[i]-i;
            else if (right[i] == -1) ans[i] = i-left[i];
            else ans[i] = min(right[i]-i, i-left[i]);
        }
        return ans;
    }
};
