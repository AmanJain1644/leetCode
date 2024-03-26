class Solution {
public:
    int findMin(vector<int>& nums) {
        int ed = nums.size()-1;
        int st = 0;
        int mid = st + (ed-st)/2;
        int ans = INT_MAX;
        if(nums[0]<nums[ed]){
            return nums[0];
        }
        while(st<=ed){
            if(ans>nums[mid]){
                ans = nums[mid];
            }
            if(nums[st]<nums[mid]){
                ans = min(ans,nums[st]);
                st = mid +1;
            }else{
                ans = min(ans,nums[ed]);
                ed=mid-1;
            }
            mid = st + (ed-st)/2;
        }
        return ans;
    }
};