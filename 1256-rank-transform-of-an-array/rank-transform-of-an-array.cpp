class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans(arr.size(),0);
        vector<int>rankingArr=arr;
        unordered_map<int,int>hash;
        sort(rankingArr.begin(),rankingArr.end());
        int rank =1;
        for(int i=0;i<arr.size();i++){
            if(hash.find(rankingArr[i])==hash.end()){
                hash[rankingArr[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            ans[i]=hash[arr[i]];
        }
        return ans;


    }
};