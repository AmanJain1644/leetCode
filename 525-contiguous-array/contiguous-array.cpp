class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>hash;
        int sum=0;
        int maxi=0;
        int n=nums.size();
        hash[0]=-1;
        for(int i=0;i<n;i++){
            sum+=nums[i]==1?1:-1;
            if(hash.find(sum)!=hash.end()){
                maxi=max(maxi,i-hash[sum]);
            }else{
                hash[sum]=i;
            }
        }
        return maxi;
        
    }
};