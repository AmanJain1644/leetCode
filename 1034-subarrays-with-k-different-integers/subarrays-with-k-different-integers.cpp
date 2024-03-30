class Solution {
public:
    int atmost(vector<int>& nums, int k){
        int n =nums.size();
        int ans=0;
        unordered_map<int ,int>hash;
        int i=0;
        for(int j=0;j<n;j++){
            hash[nums[j]]++;            
            while(hash.size()>k){
                hash[nums[i]]--;
                if(hash[nums[i]]==0){
                    hash.erase(nums[i]);
                }
                i++;
            }
            ans+=j-i+1;

            
        }  
        return ans;      
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmost(nums,k)-atmost(nums,k-1);        
        
    }
};