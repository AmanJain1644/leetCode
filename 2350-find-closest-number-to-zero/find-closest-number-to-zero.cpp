class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int ans = nums[0];
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i])<abs(ans)){
                ans = nums[i];
            }else if(abs(nums[i])==abs(ans)){
                ans=max(nums[i],ans);
            }
        }    
        return ans;    
    }
};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();