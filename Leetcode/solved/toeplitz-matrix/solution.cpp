// https://leetcode.com/problems/toeplitz-matrix/description/

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int N = matrix.size(), M = matrix[0].size();
        map<int, set<int>> diagonals;
        for (int i=0;i<N;i++)
            for (int j=0;j<M;j++)
                diagonals[i-j].insert(matrix[i][j]);
        for (auto p : diagonals)
            if (p.second.size() > 1) return false;
        return true;
    }
};
