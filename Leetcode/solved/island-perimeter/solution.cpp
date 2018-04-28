// https://leetcode.com/problems/island-perimeter/description/

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int N = grid.size();
        if (N == 0) return 0;
        int M = grid[0].size();

        int dr[4] = {-1,0,1,0};
        int dc[4] = {0,1,0,-1};

        int ans = 0;
        for (int i=0;i<N;i++) {
            for (int j=0;j<M;j++) {
                if (grid[i][j] == 1) {
                    for (int k=0;k<4;k++) {
                        if (i+dr[k] < 0  ||
                            i+dr[k] >= N ||
                            j+dc[k] < 0  ||
                            j+dc[k] >= M) ans++;
                        else if (grid[i+dr[k]][j+dc[k]] == 0) ans++;
                    }
                }
            }
        }
        return ans;
    }
};
