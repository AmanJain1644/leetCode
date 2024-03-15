class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int flag=0;
        for(auto val:nums){
            if(val==0){
                flag++;
                continue;
            }
            product*=val;
        }  
        for(int i=0;i<nums.size();i++){
            if(flag>1){
                nums[i]=0;
            }
            else if(flag==1){
                if(nums[i]==0){
                    nums[i]=product;
                }else{
                    nums[i]=0;
                }
            }else{
                nums[i]=product/nums[i];
            }


        } 
        return nums;   
    }
};