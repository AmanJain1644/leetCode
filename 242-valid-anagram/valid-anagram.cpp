class Solution {
public:
    bool isAnagram(string s, string t) {       

        if(s.length()!=t.length()){
            return false;
        }
        unordered_map<char,int>hashs;
        unordered_map<char,int>hasht;
        for(char val : s){
            hashs[val]++;
        }
        for(char val:t){
            hasht[val]++;
        }
        for(char val:t){
            if(hashs[val]!=hasht[val]){
                return false;
            }
        }
        return true;
        
    }
};