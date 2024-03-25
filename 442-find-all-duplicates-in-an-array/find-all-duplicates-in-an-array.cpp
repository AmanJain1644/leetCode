class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
    
        for(int i=0;i<n;i++){
            if(hash[nums[i]]>1){
                ans.push_back(nums[i]);
                hash[nums[i]]=0;
            }
        }
        return ans;
    }
};