class Solution {
public:
    string rotate(string s){
        string str="";
        int n = s.length();
        str+=s[n-1];
        for(int i=0;i<n-1;i++){
            str+=s[i];
        }
        return str;
    }
    bool rotateString(string s, string goal) {
        if(s==goal) return true;
        string temp = rotate(s);
        while(temp!=s){
            if(temp==goal) return true;
            temp = rotate(temp);
        }
        return false;
    }
};