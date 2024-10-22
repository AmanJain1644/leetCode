class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0 ;
        int maxi = 0;
        unordered_map<char,int>mp;
        for(int right = 0;right<s.size();right++){
            if(mp.find(s[right])!=mp.end()){
                left = max(left,mp[s[right]]+1);
            }
            mp[s[right]]=right;
            maxi = max(maxi,right-left +1);
        }     
        return maxi;   
    }
};