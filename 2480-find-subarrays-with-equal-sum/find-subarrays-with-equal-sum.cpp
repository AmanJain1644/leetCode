class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        unordered_map<int,int>hash;
        int n=nums.size();
        vector<int>ans(n-1,0);
        for(int i=0;i<n-1;i++){
            ans[i]=nums[i]+nums[i+1];
        }
        for(int i=0;i<n-1;i++){
            hash[ans[i]]++;
        }
        for(int i=0;i<n-1;i++){
            if(hash[ans[i]]>=2){
                return true;
            }
        }
        return false;

                
    }
};