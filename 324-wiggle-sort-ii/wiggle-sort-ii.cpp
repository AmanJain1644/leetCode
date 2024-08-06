class Solution {
public:
    static void threeway(vector<int>& nums,int val){
        int n = nums.size();
        int low = 0;
        int mid = 0;
        int high = n-1;
        while(mid<=high){
            if(nums[mid]==val){
                mid++;
            }else if(nums[mid]<val){
                swap(nums[low++],nums[mid++]);
            }else{
                swap(nums[mid],nums[high--]);
            }
        }
    }
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        if(n<=1) return;
        nth_element(nums.begin(),nums.begin()+n/2,nums.end());
        int median = nums[n/2];   
        threeway(nums,median);
        vector<int>result(n);
        int left = (n+1)/2,right = n;
        for(int i=0;i<n;i++){
            if(i%2==0){
                result[i]=nums[--left];
            }else{
                result[i]=nums[--right];
            }
        }
        nums=result;

    }
};