class Solution {
public:
    int maxUniqueSplit(string s) {
        unordered_set<string> uniqueSubstrings;
        return backtrack(s, 0, uniqueSubstrings);
    }
    
    int backtrack(const string& s, int start, unordered_set<string>& uniqueSubstrings) {
        if (start == s.length()) {
            return uniqueSubstrings.size();
        }
        
        int maxCount = 0;
        for (int end = start + 1; end <= s.length(); ++end) {
            string currentSubstring = s.substr(start, end - start);
            if (uniqueSubstrings.find(currentSubstring) == uniqueSubstrings.end()) {
                uniqueSubstrings.insert(currentSubstring);
                maxCount = max(maxCount, backtrack(s, end, uniqueSubstrings));
                uniqueSubstrings.erase(currentSubstring); 
            }
        }
        
        return maxCount;
    }
};
