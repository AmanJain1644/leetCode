class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        // approach -1 two pointers
        int i=0;
        int j=i+1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        set<pair<int,int>>ans;
        while(j<n){
            if(nums[j]-nums[i]==k){
                ans.insert({nums[i],nums[j]});
                i++;j++;
            }

            else if(nums[j]-nums[i]>k){
                i++;
            }else{
                j++;
            }

            if(i==j)j++;
        }   

        return ans.size()  ;
    }
};