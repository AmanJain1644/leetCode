class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ans=1;
        int n=nums.size();
        int j=1;
        int i=0;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
                ans++;
            }
            j++;
        }
        return ans;
    }
};