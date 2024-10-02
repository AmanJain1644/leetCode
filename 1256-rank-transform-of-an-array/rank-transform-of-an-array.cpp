class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int>ans(n,0);
        vector<int>rankingArr=arr;
        unordered_map<int,int>hash;
        sort(rankingArr.begin(),rankingArr.end());
        int rank =1;
        for(int i=0;i<n;i++){
            if(hash.find(rankingArr[i])==hash.end()){
                hash[rankingArr[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<n;i++){
            ans[i]=hash[arr[i]];
        }
        return ans;


    }
};