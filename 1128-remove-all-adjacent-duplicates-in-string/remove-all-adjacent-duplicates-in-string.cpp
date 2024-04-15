class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.length();
        string ans;
        for(int i=0;i<n;i++){
            int l = ans.length();
            if(l>0 && ans[l-1]==s[i]){
                ans.pop_back();
            }else{
                ans.push_back(s[i]);
            }
        }   
        return ans;     
    }
};