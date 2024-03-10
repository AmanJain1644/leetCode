class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int ans=0;
        int j=n-1;
        int i=-1;
        while(j>i){
            if(nums[i+1]==val){
                swap(nums[i+1],nums[j]);
                j--;
            }else{
                i++;

            }
        }
        return i+1;        
    }
};