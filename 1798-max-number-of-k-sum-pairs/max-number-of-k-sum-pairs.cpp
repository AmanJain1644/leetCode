class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            if(hash[k-nums[i]]>0){
                count++;
                hash[k-nums[i]]--;

            }else{
                hash[nums[i]]++;
            }
        }
        return count;
        
    }
};