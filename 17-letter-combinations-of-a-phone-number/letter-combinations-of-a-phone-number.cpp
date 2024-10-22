class Solution {
public:
    void backtrack(vector<string>&keys,vector<string>&ans,string&curr,int indx,string &digits){

        if(indx==digits.size()){
            ans.push_back(curr);
            return;
        }
        string letters = keys[digits[indx]-'0'];
        for(char c:letters){
            curr.push_back(c);
            backtrack(keys,ans,curr,indx+1,digits);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        vector<string>keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr;
        vector<string>ans;
        backtrack(keys,ans,curr,0,digits);
        return ans;        
    }
};