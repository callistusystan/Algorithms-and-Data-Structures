// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int N = prices.size(); 
        if (N == 0) return 0;
        int ans = 0, cheapest = prices[0];
        for (int i=1;i<N;i++) {
            cheapest = min(cheapest, prices[i]);
            ans = max(ans, prices[i]-cheapest);
        }
        return ans;
    }
};