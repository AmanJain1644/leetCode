class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> ans;
        vector<int>count(n+1,0);
        for(auto value:nums){
            count[value]++;
        } 
        for(int i=1;i<n+1;i++){
            if(count[i]==0){
                ans.push_back(i);
            }
        } 
        return ans;      
    }
};