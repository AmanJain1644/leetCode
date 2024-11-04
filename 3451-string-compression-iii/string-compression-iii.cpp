class Solution {
public:
    string compressedString(string word) {
        string str = "";
        vector<int>track(26);
        int n = word.length();
        track[word[0]-'a']++;
        for(int i=1;i<n;i++){
            char ch = word[i];
            if(word[i-1]!=ch){
                str+=track[word[i-1]-'a']+'0';
                str+=word[i-1];
                track[word[i-1]-'a'] = 0;
            }else{
                if(track[ch-'a']==9){
                    str+='9';
                    str+=ch;
                    track[ch-'a']=0;
                }
            }       
            track[ch-'a']++;
        }  
        str+=track[word[n-1]-'a']+'0';
        str+=word[n-1];
        return str;      
    }
};