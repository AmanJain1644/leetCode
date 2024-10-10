class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>ans;
        for(int n:nums){
            if(n%2){
                odd.push_back(n);
            }else{
                even.push_back(n);
            }
        }
        int i=0;
        int j=0;
        while(i<even.size() && j<odd.size()){
            ans.push_back(even[i]);
            ans.push_back(odd[j]);
            i++;
            j++;            
        }
        return ans;
    }
};