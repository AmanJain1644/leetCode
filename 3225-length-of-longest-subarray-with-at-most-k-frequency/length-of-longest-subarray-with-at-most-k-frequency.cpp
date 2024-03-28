class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int count=0;
        unordered_map<int,int>hash;
        for(int j=0;j<n;j++){
            hash[nums[j]]++;
            while(hash[nums[j]]>k){
                hash[nums[i]]--;
                i++;
            }
            count=max(count,j-i+1);
        }  
        return count;   

    }
};