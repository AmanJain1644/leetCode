class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char,int>hash;
        string ans="";
        for(auto value:s){
            hash[value]++;
        }   
        for(auto value:order){
            while(hash[value]>0){
                ans+=value;
                hash[value]--;
            }
        } 
        for(auto value:s){
            if(hash[value]>0){
                ans+=value;
            }
        }
        return ans;           
    }
};