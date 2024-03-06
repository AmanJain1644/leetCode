class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans(n,0);
        int st=0;
        int ed=n-1;
        int i=ed;
        while(st<=ed){
            int stq=nums[st]*nums[st];
            int edq=nums[ed]*nums[ed];
            if(edq>stq){
                ans[i]=edq;
                ed--;
                i--;
            }else{
                ans[i]=stq;
                st++;
                i--;
            }
        }
        return ans;

        
    }
};