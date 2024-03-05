class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(2,0);
        int n=nums.size();
        int org=(n*(n+1))/2;
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                arr[0]=abs(nums[i]);
                break;
            }else{
                nums[abs(nums[i])-1]*=-1;
            }
        }
        
        sum-=arr[0];
        arr[1]=org-sum;
        return arr;
        


        
    }
};