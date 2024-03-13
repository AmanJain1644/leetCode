class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n = prices.size();
        int mini = prices[0]+fee;
        int profit = 0; 
        for(auto val:prices){
            if(mini<val){
                profit+=val-mini;
                mini=val;
            }else if(val+fee<mini){
                mini=val+fee;
            }

        }
        
        return profit;
    }
};