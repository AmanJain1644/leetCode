class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0;
        int n = nums.size();
        int ed=n-1;
        if(n==1){
            return nums[0];
        }        
        while(st<=ed){
            int mid = st+(ed-st)/2;            
            if((mid -1 <0 || nums[mid-1] != nums[mid]) && (mid+1==n || nums[mid]!=nums[mid+1]) ){
                return nums[mid];
            }
            int size = nums[mid]==nums[mid-1]?mid-1:mid;
            if(size & 1){
                ed=mid-1;
            }else{
                st=mid+1;
            }         
        } 
        return nums[ed];
    }
};