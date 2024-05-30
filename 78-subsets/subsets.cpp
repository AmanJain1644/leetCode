class Solution {
public:
    void helper(vector<int>&nums,int indx,vector<int>&curr,vector<vector<int>>&res){

        if(indx>=nums.size()){
            res.push_back(curr);
            return ;
        }
        // include
        curr.push_back(nums[indx]);
        helper(nums,indx+1,curr,res);
        curr.pop_back();
        helper(nums,indx+1,curr,res);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>res;
        vector<int>curr;
        helper(nums,0,curr,res);
        return res;        
    }
};