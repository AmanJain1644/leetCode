class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>st;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(nums1[i]==nums2[j]){
                    st.insert(nums1[i]);
                }
            }
        }
        for(auto value:st){
            ans.push_back(value);
        }
        return ans;

    }
};