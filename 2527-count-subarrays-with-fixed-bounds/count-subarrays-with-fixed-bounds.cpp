#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        int n = nums.size();
        ll ans=0;
        ll minIdx = -1,maxIdx =-1, invalidIdx =-1;
        for(ll i =0;i<n;i++){
            if(nums[i]<minK || nums[i]>maxK)invalidIdx=i;
            if (nums[i]==minK) minIdx = i;
            if (nums[i]==maxK) maxIdx = i;
            ans+= max((ll)0,(min(minIdx,maxIdx)-invalidIdx));
        }

        return ans;
    }
};