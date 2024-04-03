class Solution {
public:
    bool search(int st,int x,vector<int> nums){
        int ed = nums.size()-1;
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(nums[mid]==x){
                return true;
            }
            else if(nums[mid]>x){
                ed = mid-1;
            }else{
                st=mid+1;
            }

        }
        return false;
    }
    int findPairs(vector<int>& nums, int k) {
        //approach -2 binary search
        sort(nums.begin(),nums.end());
        int n = nums.size();
        set<pair<int,int>>ans;
        for(int i=0;i<n;i++){
            if(search(i+1,nums[i]+k,nums)){
                ans.insert({nums[i],nums[i]+k});
            }           
        }
        return ans.size() ;

    }
};