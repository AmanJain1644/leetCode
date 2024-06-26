class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        if(n==0)return 0;
        int num=0,i=0,sign=1;
        while(s[i]==' '){
            i++;
        }

        if(i<n && s[i]=='+'||s[i]=='-'){
            sign=s[i]=='+'?1:-1;
            i++;
        }

        while(i<n && isdigit(s[i])){
            if(num>INT_MAX/10 || num==INT_MAX/10 && s[i]>'7') return sign==1?INT_MAX:INT_MIN;
            num=num*10+(s[i]-'0');
            i++;            
        }
        return num*sign;
        
    }
};