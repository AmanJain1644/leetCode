class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int st = 0;
        int ed = n-1;
        vector<int>ans(2,-1);
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(nums[mid]==target){
                ans[0]=mid;
                ed=mid-1;
            }
            else if(nums[mid]>target){
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        st=0;
        ed=n-1;
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(nums[mid]==target){
                ans[1]=mid;
                st=mid+1;
            }
            else if(nums[mid]>target){
                ed=mid-1;
            }
            else{
                st=mid+1;
            }
        }
        

    
        return ans;

    }
    
};  