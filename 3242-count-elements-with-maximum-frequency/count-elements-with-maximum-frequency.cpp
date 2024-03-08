class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>hash;
        int ans=INT_MIN;
        int count=0;
        for(auto value:nums){
            hash[value]++;
            if(ans<hash[value]){
                ans=hash[value];
            }
        }
        for(auto value:nums){
            if(hash[value]==ans){
                count++;
                hash[value]=0;
            }
        }
        return ans*count;


    }
};