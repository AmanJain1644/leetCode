class Solution {
public:
    void helper(vector<int>& nums,int i,vector<int>&current_subset,vector<vector<int>>&subsets){
        if(i>=nums.size()){
            subsets.push_back(current_subset);
            return;
        }
        current_subset.push_back(nums[i]);
        helper(nums,i+1,current_subset,subsets);
        current_subset.pop_back();
        helper(nums,i+1,current_subset,subsets);
        
    }
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>>subsets;
        vector<int>current_subset;
        int sum = 0;
        helper(nums,0,current_subset,subsets);
        for(int i=0;i<subsets.size();i++){
            int x = 0;
            for(int j=0;j<subsets[i].size();j++){
                x^=subsets[i][j];
            }
            sum+=x;
            
        }      
    return sum;
    }
};