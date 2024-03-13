class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        
        unordered_map<int,int>hash;
        for(auto value:nums){
            hash[value]++;
        }

        for(auto value:nums){
            if(hash[value]>n/2) return value;
        }
        return 0;
        
    }
};