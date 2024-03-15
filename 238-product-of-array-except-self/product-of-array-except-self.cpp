class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n);
        int product=1;
        int flag=0;
        for(auto val:nums){
            if(val==0){
                flag++;
                continue;
            }
            product*=val;
        }  
        if(flag>1){
            return ans;
        }
        for(int i=0;i<n;i++){
            if(flag==1){
                 if(nums[i]==0 ){
                    ans[i]=product;
                    return ans;
                }
                
            }else{
                ans[i]=product/nums[i];
            }
        }
        return ans;   
    }
};