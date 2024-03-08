class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>hash;
        int n=nums.size();
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        
        for(int i=0;i<n;i++){
            cout<<hash[nums[i]]<<" ";
            if(hash[nums[i]]>1){
                ans.push_back(nums[i]);
                hash[nums[i]]=0;
            }
        }
        return ans;
    }
};