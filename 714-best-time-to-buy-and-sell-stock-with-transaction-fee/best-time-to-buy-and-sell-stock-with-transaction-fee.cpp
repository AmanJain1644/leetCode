class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
    
        int mini=INT_MAX,maxi=INT_MIN;
        int profit=0;
        for(auto val: prices){
            if(maxi>val+fee){
                profit+=max(0,maxi-mini-fee);
                mini=maxi=val;               

            }else{
                mini=min(mini,val);
                maxi=max(maxi,val);
            }
            
        }
        profit+=max(0,maxi-mini-fee);
        return profit;
        
    }
};