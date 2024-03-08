class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>arr(n+1,0);
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
    
        for(int i=0;i<n+1;i++){
            cout<<arr[i]<<" ";
            if(arr[i]>1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};