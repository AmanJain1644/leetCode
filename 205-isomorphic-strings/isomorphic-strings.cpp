class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        int m = t.size();
        if(n!=m)return false; 
        unordered_map<char,int>hs; 
        unordered_map<char,int>ht; 

        for(int i=0;i<n;i++){
            if(hs.find(s[i])!=hs.end() && hs[s[i]]!=t[i]) return false;
            if(ht.find(t[i])!=ht.end() && ht[t[i]]!=s[i]) return false;
            hs[s[i]]=t[i];
            ht[t[i]]=s[i];

        }
        return true;     
    }
};