class Solution {
public:
    string makeFancyString(string s) {
        string str = "";
        int count = 1;
        str+= s[0];
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]){
                count++;
                if(count<=2){
                    str+=s[i];
                }
            }else{
                str+=s[i];
                count=1;
            }
        } 
        return str;    
    }
};