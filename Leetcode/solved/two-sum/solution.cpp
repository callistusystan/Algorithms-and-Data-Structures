// https://leetcode.com/problems/two-sum/description/

class Solution {
public:
    vector<int> twoSum(vector<int>& A, int target) {
        int N = A.size();
        int i=0, j=N-1;
        unordered_map<int, vector<int>> idx;
        for (int i=0;i<N;i++) idx[A[i]].push_back(i);
        for (int i=0;i<N;i++) {
            int need = target-A[i];
            if (idx.count(need)) {
                if (A[i] == need && idx[need].size() >= 2) return { idx[need][0], idx[need][1] };
                else if (A[i] != need) return { i, idx[need][0] };
            }
        }
        return { -1, -1 };
    }
};