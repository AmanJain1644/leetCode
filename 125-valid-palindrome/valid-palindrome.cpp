class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        int n = s.length();
        for(int i=0;i<n;i++){
            if((s[i]>=97 && s[i]<=122)||(s[i]>=48 && s[i]<=57)){
                str+=s[i];
            }else if(s[i]>=65 && s[i]<=90){
                str+=(s[i]-'A'+'a');
            }
        }
        cout<<str;
        int l = str.length();
        if(l==0 || l==1)return true;
        for(int i=0;i<(l/2);i++){
            if(str[i]!=str[l-1-i]){
                return false;
            }
        }

        return true;                
    }
};