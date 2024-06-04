class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>map;
        int n = s.size();
        int count = 0;
        for(auto ch :s){
            map[ch]++;
        }
        for(auto ch :s){
            if(map[ch]%2==0){
                count+=map[ch];
            }else{
                count+=map[ch]-1;
            }
            map[ch]=1;
        }
        return n-count>0?count+1:count;

    }
};