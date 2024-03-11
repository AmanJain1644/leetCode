class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int minn=INT_MAX;
        if (nums[0]==target) return 1;        
        int j=0;
        int i=0;
        int sum=nums[0];
        int flag=1;
        while(i<n && j<n){
    
            if(sum>=target){
                minn=min(minn,(j-i+1));
                cout<<sum<<minn<<j<<i;
                sum-=nums[i];
                i++;
                flag=0;
            }else{
                j++;
                if (j==n) break;
                sum+=nums[j];
                

            }

        }
        if(flag) return 0;
        return minn;
    }
};