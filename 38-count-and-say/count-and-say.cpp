class Solution {
public:
    string countAndSay(int n) {
        if(n==1)return"1";
        string str="1";        
        for(int i=2;i<n+1;i++){
            string update="";
            str+="$";
            int count=1;
            for(int j=1;j<str.size();j++){
                if(str[j-1]!=str[j]){
                    update+=(count+'0');
                    update+=str[j-1];
                    count=1;
                }else{
                    count++;
                }
            }
            str=update;
        }
        return str;
    }
        
        
    
};