class Solution {
public:
    void rotate(string &s){
        char ch = s[0];
        int n = s.length();
        for(int i=0;i<n-1;i++){
            s[i]=s[i+1];
        } 
        s[n-1]=ch;  
    }
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        int i=0;
        int n = s.length();
        while(i!=n){
            if(s==goal) return true;
            rotate(s);
            i++;
        }
        return false;
    }
};