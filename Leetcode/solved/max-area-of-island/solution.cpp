// https://leetcode.com/problems/max-area-of-island/description/

class Solution {
public:
    int dfs(int x, int y, int N, int M, vector<vector<int>> &grid, vector<vector<bool>> &visited) {
        visited[x][y] = true;
        int dr[] = {-1,0,1,0};
        int dc[] = {0,1,0,-1};
        int res = 1;
        for (int i=0;i<4;i++) {
            int x2=x+dr[i], y2=y+dc[i];
            if (x2 < 0 || x2 >= N || y2 < 0 || y2 >= M) continue;
            if (grid[x2][y2] == 1 && !visited[x2][y2]) res += dfs(x2, y2, N, M, grid, visited);
        }
        return res;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int N=0, M=0;
        N = grid.size();
        if (N) M = grid[0].size();
        
        int ans = 0;
        if (N && M) {
            vector<vector<bool>> visited(N, vector<bool>(M));
            for (int i=0;i<N;i++) for (int j=0;j<M;j++)
                if (grid[i][j] == 1 && !visited[i][j]) ans = max(ans, dfs(i, j, N, M, grid, visited));
        }
        return ans;
    }
};