class Solution {
public:
    bool IsPalindrome(string& s, int st, int ed) {
        while (st < ed) {
            if (s[st] != s[ed]) {
                return false;
            }
            st++;
            ed--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        int n = s.length();
        string ans = "";
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                if (IsPalindrome(s, i, j)) {
                    string t = s.substr(i, j - i + 1);
                    ans = t.length() > ans.length() ? t : ans;
                }
            }
        }
        return ans;
    }
};