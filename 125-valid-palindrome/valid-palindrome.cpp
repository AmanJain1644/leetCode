class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int n = s.length();
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }
        // cout<<str;
        int l = str.length();
        if(l<=1)return true;
        for(int i=0;i<(l/2);i++){
            if(str[i]!=str[l-1-i]){
                return false;
            }
        }

        return true;                
    }
};