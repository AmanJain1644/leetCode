class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        // int buy = prices[0];
        for(int i=1;i<prices.size();i++){
           if(prices[i]>prices[i-1]){
                profit += prices[i]-prices[i-1];
           }
        }
        return profit;
        
    }
};