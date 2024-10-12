class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>even;
        priority_queue<int>odd;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i%2){
                odd.push(nums[i]);
            }else{
                even.push(nums[i]);
            }
        }

        for(int i=0;i<n;i++){
            if(i%2){
                nums[i]=odd.top();
                odd.pop();
            }else{
                nums[i]=even.top();
                even.pop();
            }
        }
        return nums;

    }
};