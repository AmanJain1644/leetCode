class Solution {
public:
    void helper(vector<int>& candidates, int target,vector<vector<int>>&res,vector<int>curr){
        if(target==0){
            vector<int>v(curr);
            sort(v.begin(),v.end());
            for(auto i : res){
                sort(i.begin(),i.end());
                if(i==v) return ;
            }
            res.push_back(curr);
            return ;
        }
        if(target<0){
            return ;
        }
        for(int i=0;i<candidates.size();i++){
            target-=candidates[i];
            curr.push_back(candidates[i]);
            helper(candidates,target,res,curr);
            curr.pop_back();
            target+=candidates[i];

        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>curr;
        helper(candidates,target,res,curr);
        
        return res;
        
    }
};