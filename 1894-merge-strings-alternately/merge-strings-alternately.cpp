class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n=word1.size();
        int m=word2.size();
        int i{0},j{0};
        string str="";
        while(i<n && j<m){
            str+=word1[i];
            str+=word2[j];
            i++;j++;
        }
        while(i<n){
            str+=word1[i];
            i++;
        }
        while(j<m){
            str+=word2[j];
            j++;
        }
        return str;
        
    }
};