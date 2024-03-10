class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1] && nums[i]!=0){
                nums[i]*=2;
                nums[i+1]=0;
            }
        }
        int i=0;
        for(auto value:nums){
            if(value){
                ans[i]=value;
                i++;
            }
        }
        return ans;
        
    }
};