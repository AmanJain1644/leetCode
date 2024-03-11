class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n=prices.size();
        int i=0;
        int j=1;
        while(j<n){
            if(prices[i]<prices[j]){
                int profit=prices[j]-prices[i];
                if(maxProfit<profit){
                    maxProfit=profit;
                }
            }else{
                    i=j;
                }
            j++;
        }
        return maxProfit;
        
    }
};