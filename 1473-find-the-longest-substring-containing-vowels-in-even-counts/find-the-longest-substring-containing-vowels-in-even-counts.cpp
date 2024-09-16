class Solution {
public:
    int findTheLongestSubstring(string s) {
        int hash[32];
        for(int i=0;i<32;i++){
            hash[i]=-2;
        }
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
            if(hash[mask]!=-2){
                maxLen = max(maxLen,i-hash[mask]);
            }else{
                hash[mask]=i;
            }
        }    
        return maxLen;    
    }
};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();