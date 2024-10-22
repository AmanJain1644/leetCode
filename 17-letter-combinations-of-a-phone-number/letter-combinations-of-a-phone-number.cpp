class Solution {
public:
    void backtrack(vector<string>&keys,string &curr,string &digits,int indx ,vector<string>&ans){
        if(indx == digits.size()){
            ans.push_back(curr);
            return ;
        }

        string letters = keys[digits[indx]-'0'];
        for(char letter:letters){
            curr.push_back(letter);
            backtrack(keys,curr,digits,indx+1,ans);
            curr.pop_back();
        }

    }
    vector<string> letterCombinations(string digits) {
        if(digits=="") return {};
        vector<string> ans;
        vector<string> keys = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string curr;
        backtrack(keys,curr,digits,0,ans);

        return ans;

    }
};