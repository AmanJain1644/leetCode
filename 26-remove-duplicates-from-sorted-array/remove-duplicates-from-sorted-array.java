class Solution {
    public int removeDuplicates(int[] nums) {
        int ans=1;
        int n=nums.length;
        int j=1;
        int i=0;
        while(j<n){
            if(nums[i]!=nums[j]){
                int temp=nums[i+1];
                nums[i+1]=nums[j];
                nums[j]=temp;
                
                i++;
                ans++;
            }
            j++;
        }
        return ans;
        
    }
}