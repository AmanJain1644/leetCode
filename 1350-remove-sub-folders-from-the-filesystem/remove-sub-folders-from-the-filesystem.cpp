class Solution {
public:


    vector<string> removeSubfolders(vector<string>& folder) {
        vector<string>ans;
        sort(folder.begin(),folder.end());
        ans.push_back(folder[0]);
        for(int i=1;i<folder.size();i++){
            string checker = ans.back();
            int n = checker.size();
            if(folder[i].substr(0,n)!=checker || folder[i].size()>n && folder[i][n]!='/'){
                ans.push_back(folder[i]);
            }
        }
        return ans;

    }
};