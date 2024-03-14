class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int i{0},j{0},count{0},sum{0};
        int n=nums.size();
        while (j<n){
            sum+=nums[j];
            while(sum>goal && i<j){
                sum-=nums[i];
                i++;
            }
            if(sum==goal){
                int k=i;
                while(k<j && nums[k]==0){
                    count++;
                    k++;
                }
                count++;
            }
            j++;
        }
        return count;
        
    }
};