class Solution {
public:

    void counter(const int&maxi,int curr,int &count,int i,vector<int>&nums){
        if(i==nums.size()){
            if(curr==maxi){
                count++;
            }     
                return;
                
        }

        counter(maxi,curr|nums[i],count,i+1,nums);
        counter(maxi,curr,count,i+1,nums);

    }
    int countMaxOrSubsets(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        int curr = 0;
        int count = 0;
        for(int num:nums){
            curr = curr|num;
            maxi=max(maxi,curr);
        }
        counter(maxi,0,count,0,nums);

        return count;            
    }
};





int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();