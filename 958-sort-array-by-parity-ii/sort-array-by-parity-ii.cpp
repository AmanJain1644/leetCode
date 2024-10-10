class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size());
        int i=0;
        int j=1;
        for(int n:nums){
            if(n%2){
                ans[j]=n;
                j+=2;
            }else{
                ans[i]=n;
                i+=2;
            }
        }
        
        return ans;
    }
};