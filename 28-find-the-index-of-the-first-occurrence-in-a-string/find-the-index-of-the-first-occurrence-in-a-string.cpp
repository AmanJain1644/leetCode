class Solution {
public:
    int strStr(string haystack, string needle) {
        int lh = haystack.length();
        int ln = needle.length();
        for(int i=0;i<lh;i++){
            if(haystack.substr(i,ln)==needle)return i;
        }   
        return -1;    
    }

};