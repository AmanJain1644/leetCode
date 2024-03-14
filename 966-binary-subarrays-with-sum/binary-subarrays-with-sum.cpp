class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int,int>hash;
        int sum=0;
        int count=0;
        hash[0]=1;
        for(auto val:nums){
            sum+=val;
            if(hash.find(sum-goal)!=hash.end()){
                count+=hash[sum-goal];            
            }if(hash.find(sum)!=hash.end()){
                hash[sum]++;
            }else{
                hash[sum]=1;
            }
        }
        return count;
    }
};