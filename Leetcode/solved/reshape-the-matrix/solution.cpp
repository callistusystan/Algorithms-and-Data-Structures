// https://leetcode.com/problems/reshape-the-matrix/description/

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int N = nums.size(), M = nums[0].size();
        if (N*M != r*c) return nums;
        vector<vector<int>> reshaped(r, vector<int>(c));
        for (int i=0;i<r;i++) {
            for (int j=0;j<c;j++) {
                int k = (i*c+j)/M, l = (i*c+j)%M;
                reshaped[i][j] = nums[k][l];
            }
        }
        return reshaped;
    }
};
