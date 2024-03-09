class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans;
        set<int>st;
        int n=nums1.size();
        int m=nums2.size();
        int i,j;
        i=j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        while(i<n && j<m){
            if(nums1[i]==nums2[j]){
                st.insert(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        
        for(auto value:st){
            ans.push_back(value);
        }
        return ans;

    }
};