class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        for(auto query : queries){
            int left = query[0];
            int right = query[1];
            int Xor = arr[left];
            for(int i=left+1; i<=right; i++){
                Xor^=arr[i];
            }
            ans.push_back(Xor);

        } 
        return ans;
       
    }
};
















static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();








