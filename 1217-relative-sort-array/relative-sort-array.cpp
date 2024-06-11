class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int>mapp;
        vector<int>ans;
        for(int n:arr1){
            mapp[n]++;
        }
        for(int n:arr2){
            while(mapp[n]){
                ans.push_back(n);
                mapp[n]--;
            }
        }
        for(auto &it:mapp){
            while(it.second){
                ans.push_back(it.first);
                mapp[it.first]--;
            }
        }
        return ans;

    }
};