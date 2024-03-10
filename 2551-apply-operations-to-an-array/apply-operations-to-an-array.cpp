class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int cauntZero = 0;
        for (int i = 0,j=1; i < nums.size()-1; i++,j++) {
            if (nums[i] == nums[j]) {
                nums[i] = nums[i] + nums[j];
                nums[j] = 0;
            }      
        }
        for(int i=0;i<nums.size();i++){
            if (nums[i] == 0) {
                cauntZero++;
            }
            else {
                int num = nums[i];
                nums[i] = 0;
                nums[i - cauntZero] = num;
            }
        }
        return nums;
    }
};