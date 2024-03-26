class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ed = nums.size()-1;
        int st = 0;
        int mid = st+(ed-st)/2;
        while(st<=ed){
            if(nums[mid]==target){
                return mid;
            }else if (nums[mid]>target){
                ed =mid-1;
            }else{
                st = mid+1;
            }
            mid = st+(ed-st)/2;
        }
        return mid;
        
    }
};