class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int curr = 0;
        int count = 0;
        for(int num:nums){
            curr = curr|num;
            maxi=max(maxi,curr);
        }
        n=1<<n;
        for(int i=0;i<n;i++){
            int curr = 0;
            for(int j=0;j<nums.size();j++){
                if(i&(1<<j)){
                    curr = curr|nums[j];
                }
            }
                    if(curr == maxi){
                        count++;
                    }
            
        }

        return count;            
    }
};