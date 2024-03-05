class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> arr(2,0);
        int n=nums.size();
        int org;
        for(int i=0;i<n;i++){
            if(nums[abs(nums[i])-1]<0){
                arr[0]=abs(nums[i]);
            }else{
                nums[abs(nums[i])-1]*=-1;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                arr[1]=i+1;
                break;
            }
        }
        return arr;
        


        
    }
};