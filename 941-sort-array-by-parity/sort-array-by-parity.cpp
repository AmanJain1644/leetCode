class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        int start=0;
        int end=nums.size()-1;
        int i=0;
        while(start<end){
            if((nums[i]&1)==0){
                swap(nums[start],nums[i]);
                start++;
                i++;
            }else{
                swap(nums[end],nums[i]);
                end--;
            }
        }
        return nums;
        
    }
};