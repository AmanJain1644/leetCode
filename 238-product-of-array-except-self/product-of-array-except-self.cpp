class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1;
        int prod_0 = 1;
        int flag  = 0;
        for(int i=0;i<nums.size();i++){
            if(!nums[i]){ 
                flag++;
                prod =0;
            }else{

                 prod_0*=nums[i];
            }
           
        }
        if(flag==0){
            prod=prod_0;
        }
        if(flag>1){
            prod=prod_0=0;
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums[i]=prod_0;
            }else{
                nums[i]=prod/nums[i];       
            }
        }         

        return nums;

        
    }
};