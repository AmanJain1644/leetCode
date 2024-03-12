class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int i=0;
        int j=1;
        while(i<n-1){
            if(prices[i]>prices[i+1]){
                i++;
                j=i+1;
            }else{
                if(j<n-1 && prices[j]<prices[j+1]){
                    j++;
                    if(j==n-1){
                        profit+=prices[j]-prices[i];
                        return profit;
                    }
                }else{
                    profit+=prices[j]-prices[i];
                    i=j;
                    j++;
                    
                }
            }
        }
        return profit;
        
    }
};