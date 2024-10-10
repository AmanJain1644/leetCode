class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        vector<int>arr;
        int ans =0;
        int n = nums.size();
        arr.push_back(0);                                
        for(int i=1;i<n;i++){
            if(nums[i]<nums[arr.back()]){
                arr.push_back(i);
            }
        }

        for(int j=n-1;j>=0;j--){
            while(arr.size()>0 && nums[arr.back()]<=nums[j]){
                ans=max(ans,j-arr.back());
                arr.pop_back();
            }
        }
        return ans;
    }
};