class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        vector<int>ans;
        int m = rolls.size();
        int mSum =0;
        for(int i:rolls){
            mSum+=i;
        }
        int nSum = (m+n)*mean - mSum;
        if(nSum<n || nSum>n*6){
            return {};
        }
        if(nSum%n==0){
            int val = nSum/n;
            for(int i=0; i<n; i++){
                ans.push_back(val);
            }
            return ans;
        }

        int baseVal = nSum/n;
        int extra = nSum%n;

        for(int i=0; i<n; i++){
            if(i<extra){
                ans.push_back(baseVal + 1);
            }else{
                ans.push_back(baseVal);
            }
        }
        

        return ans;                        
    }
};