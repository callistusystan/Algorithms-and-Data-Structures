// https://leetcode.com/problems/edit-distance/description/

class Solution {
public:
    int rec(int i, int j, string &word1, string &word2, vector<vector<int>> &memo) {
        int N = word1.size(), M = word2.size();
        // Check if we reached the end of both strings
        if (i == N && j == M) return 0;
        // Check if we reached this state before
        else if (memo[i][j] != -1) return memo[i][j];
        
        // Compute this state
        memo[i][j] = INT_MAX/2;
        // Try edit
        if (i < N && j < M) memo[i][j] = min(memo[i][j], rec(i+1, j+1, word1, word2, memo) + (word1[i] != word2[j]));
        // Try add
        if (j < M) memo[i][j] = min(memo[i][j], 1 + rec(i, j+1, word1, word2, memo));
        // Try delete
        if (i < N) memo[i][j] = min(memo[i][j], 1 + rec(i+1, j, word1, word2, memo));
        
        return memo[i][j];
    }
    
    int minDistance(string word1, string word2) {
        int N = word1.size(), M = word2.size();
        vector<vector<int>> memo(N+5, vector<int>(M+5, -1));
        return rec(0, 0, word1, word2, memo);
    }
};