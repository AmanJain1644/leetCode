class Solution {
public:
    int findTheLongestSubstring(string s) {
        unordered_map<int,int>hash;
        int maxLen=0;
        int mask=0;
        hash[0]=-1;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if(ch=='a'){
                mask^=1;
            }else if(ch=='e'){
                mask^=(1<<1);
            }else if(ch=='i'){
                mask^=(1<<2);
            }else if(ch=='o'){
                mask^=(1<<3);
            }else if(ch=='u'){
                mask^=(1<<4);
            }
            if(hash.find(mask)!=hash.end()){
                maxLen = max(maxLen,i-hash[mask]);
            }else{
                hash[mask]=i;
            }
        }    
        return maxLen;    
    }
};