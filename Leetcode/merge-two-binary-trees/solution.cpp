// https://leetcode.com/problems/self-dividing-numbers/description/

class Solution {
public:
    bool isSelfDividing(int x) {
        int cur = x;
        while (cur) {
            if (cur%10 == 0 || x%(cur%10)) return false;
            cur /= 10;
        }
        return true;
    }

    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for (int i=left;i<=right;i++)
            if (isSelfDividing(i)) ans.push_back(i);
        return ans;
    }
};
