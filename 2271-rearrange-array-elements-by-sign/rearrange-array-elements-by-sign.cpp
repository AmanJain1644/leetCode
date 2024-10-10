class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0,j=1;
        vector<int>ans(nums.size());
        for(int n:nums){
            if(n>0){
                ans[i]=n;
                i+=2;
            }else{
                ans[j]=n;
                j+=2;
            }
        }
        return ans;


    }
};

int crown =[](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();