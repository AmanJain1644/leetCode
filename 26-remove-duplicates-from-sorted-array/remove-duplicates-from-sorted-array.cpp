class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int,int>hash;
        vector<int>ans;
        int n=nums.size();
        int k=0;
        for(int i=0;i<n;i++){
            hash[nums[i]]++;
        }
        for(auto value:nums){
            if(hash[value]>1){
                ans.push_back(value);
                k++;
                hash[value]=-1;
            }else if(hash[value]!=-1){
                ans.push_back(value);
                k++;
            }
        } 
        int i=0;
        for(auto value:ans){            
            nums[i]=value;
            i++;

        }
        return k;

    }
};