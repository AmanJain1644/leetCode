class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLength = 0;
        int low = 0;
        int high = 0;
        unordered_set<char> sett;
        while(high < s.length()){
            if(sett.count(s[high]) == 0){
                sett.insert(s[high]);
                high++;
                maxLength=max(maxLength,high-low);
            }else{
                sett.erase(s[low]);
                low++;
            }
        }
        return maxLength;
    }
};