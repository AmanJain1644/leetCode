class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";
        string str = "1";
        int count = 1;
        
        for(int i=1;i<n;i++){
            string update ="";
            str+='#';
            for(int j=1;j<str.size();j++){
                if(str[j]!=str[j-1]){
                    update+=(count+'0');
                    update+=str[j-1];
                    count = 1;
                }else{
                    count++;
                }
            }
            str = update;
        }    
        return str;    
    }
};