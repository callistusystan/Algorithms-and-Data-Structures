// https://leetcode.com/problems/flipping-an-image/description/

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto &v : A) {
            reverse(v.begin(), v.end());
            for (int i=0;i<(int)v.size();i++) v[i] = 1-v[i];
        }
        return A;
    }
};