class Solution {
public:
    string reorganizeString(string s) {
        int hash[26] = {0};
        for(int i=0;i<s.length();i++){
            hash[s[i]-'a']++;
        }
        char max_freq_char;
        int max_freq = INT_MIN;
        for(int i=0;i<s.length();i++){
            if(hash[s[i]-'a']>max_freq){
                max_freq=hash[s[i]-'a'];
                max_freq_char = s[i];
            }
        }
        int index=0;
        while(hash[max_freq_char-'a']>0 && index<s.length()){
            s[index]=max_freq_char;
            index+=2;
            hash[max_freq_char-'a']--;
        }
        if(hash[max_freq_char-'a'])return "";
        for(int i=0;i<26;i++){
            while(hash[i]>0){
                index = index>=s.length()?1:index;
                s[index]=i+'a';
                index+=2;
                hash[i]--;
            }
        }
        return s;
        
    }

};


