class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n = nums.size();
        vector<int>ans(n);
        int prefix_xor = 0;

        for(int num:nums){
            prefix_xor^=num;
        }

        int maxK = (1<<maximumBit)-1;

        for(int i=0;i<n;i++){
            ans[i]=maxK^prefix_xor;
            prefix_xor = prefix_xor^nums[n-1-i];
        }
        return ans;
    }
};