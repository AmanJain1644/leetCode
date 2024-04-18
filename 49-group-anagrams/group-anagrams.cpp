class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int n = strs.size();
        map<string, vector<string>> hash;
        for (int i = 0; i < n; i++) {
            string check = strs[i];
            sort(check.begin(), check.end());
            hash[check].push_back(strs[i]);
        }
        for (auto it = hash.begin(); it != hash.end(); it++) {
            ans.push_back(it->second);
        }

        return ans;
    }
};