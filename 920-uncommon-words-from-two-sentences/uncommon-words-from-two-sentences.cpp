class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int>hash;
        vector<string>ans;
        istringstream iss(s1+" "+s2);
        string word;
        while(iss>>word){
            hash[word]++;
        }
        for(const auto&entry:hash){
            if(entry.second==1){
                ans.push_back(entry.first);
            }
        }
        return ans;
    }
};