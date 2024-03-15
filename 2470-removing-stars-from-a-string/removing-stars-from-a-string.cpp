class Solution {
public:
    string removeStars(string s) {
        int i{0},j{0};
        int n=s.size();
        string str="";
        while(j<n){
            if(s[j]=='*'){
                i--;
                j++;
            }else if(j>i && s[j]!='*'){
                s[i]=s[j];
                i++;
                j++;
            }
            else{
                j++;i++;
            }
        } 
        for(int k=0;k<i;k++){
            str+=s[k];
        } 
        return str;     
    }
};