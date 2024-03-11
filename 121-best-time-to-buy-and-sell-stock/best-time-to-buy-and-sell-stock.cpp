class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxx = 0;
        int minn = prices[0];

        for(int i = 0; i < prices.size(); i++){
            maxx = max(prices[i]-minn, maxx);
            minn = min(prices[i], minn);
        }

        return maxx;
    }
};