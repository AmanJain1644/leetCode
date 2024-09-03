class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>dummy=nums;
        sort(dummy.begin(),dummy.end());
        map<int,int>order;
        for(int i=0;i<dummy.size();i++){
            if(order.find(dummy[i])==order.end())
                order[dummy[i]]=i;                        
        }
        for(int i=0;i<nums.size();i++){
            nums[i]=order[nums[i]];
        }
        return nums;

    }
};