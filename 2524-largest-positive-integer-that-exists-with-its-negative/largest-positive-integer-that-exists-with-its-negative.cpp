class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>neg;
        unordered_map<int,int>pos; 
        int ans = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos[nums[i]]=i;
            }
        } 
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                if(pos.find(nums[i]*-1)!=pos.end()){
                    ans=max(ans,nums[i]*-1);
                }
            }
        }
        return ans;              

    }
};