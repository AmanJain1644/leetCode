class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int count = 0;
        for(int i=0;i<s.size();i++){
            unordered_set<char>uni;
            for(int j=i;j<s.size();j++){
                if(uni.find(s[j])!=uni.end()){
                    break;
                }
                uni.insert(s[j]);
                count = max(count,j-i+1);
            }
        }
        return count;
                
        
    }
};