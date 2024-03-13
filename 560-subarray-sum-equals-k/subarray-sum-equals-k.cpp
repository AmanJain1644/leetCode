class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>hash;
        int count=0;
        int n=nums.size();
        int sum=0;
        hash[0]=1;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            if(hash.find(sum-k)!=hash.end()){
                
                count+=hash[sum-k];

            }if(hash.find(sum)!=hash.end()){
                hash[sum]++;
            }
            
            else{
                hash[sum]=1;
            }
        } 
        return count;     
    }
};