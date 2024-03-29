#define ll long long
class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int maxi=INT_MIN;
        for(int num:nums){
            maxi=max(num,maxi);
        }

        ll i = 0;
        int n = nums.size();
        ll count=0;
        ll ans=0;
        for(int j=0;j<n;j++){
            if(nums[j]==maxi)count++;
            while(count>=k){
                ans+=(ll)(n-j);
                if(nums[i]==maxi){
                    count--;
                }
                i++;
            }
        }
        return ans;
    }
};