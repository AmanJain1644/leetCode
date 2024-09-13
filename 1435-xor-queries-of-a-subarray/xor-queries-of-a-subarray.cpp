class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> ans;
        vector<int> prefix(arr.size());
        prefix[0]=arr[0];
        for(int i=1;i<arr.size();i++){
            prefix[i]=prefix[i-1]^arr[i];
        }
        for(auto query : queries){
            int left = query[0];
            int right = query[1];
            int Xor =0;
            if(left==0){
                Xor = prefix[right];
            }else{
                Xor = prefix[right]^prefix[left-1];
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








