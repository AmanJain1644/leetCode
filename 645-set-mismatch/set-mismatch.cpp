class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        // sorting logic 
        vector<int>ans(2,0);
        int n=nums.size();
        int i=0;
        while(i<n){
            int indx=nums[i]-1;
            if(nums[i]!=nums[indx]){
                swap(nums[i],nums[indx]);
            }else{
                i++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=i+1){
                ans[0]=nums[i];
                ans[1]=i+1;
                break;
            }
        }
        return ans;
        
        
    }
};