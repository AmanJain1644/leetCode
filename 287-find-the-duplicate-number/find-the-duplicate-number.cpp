class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int ,int>hash;
        for(auto value:nums){
            hash[value]++;
        }
        for(auto value:nums){
            if(hash[value]>1){
                return value;
            }
        }
        return -1;
    }
};