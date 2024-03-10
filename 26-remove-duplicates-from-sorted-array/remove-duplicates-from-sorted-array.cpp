class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int j=1;
        int i=0;
        while(j<n){
            if(nums[i]!=nums[j]){
                nums[i+1]=nums[j];
                i++;
                
            }
            j++;
        }
        return i+1;
    }
};