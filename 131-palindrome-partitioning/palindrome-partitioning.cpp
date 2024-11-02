class Solution {
public:

    bool Ispalindrome(string str,int l,int r){
        while(l<r){
            if(str[l++]!=str[r--]) return false;
        }

        return true;
    }

    void helper(vector<vector<string>>&ans,string s,vector<string> temp,int st){
        if(st==s.size()){
            ans.push_back(temp);
            return;
        }

        for(int end=st; end<s.size();end++){
            if(Ispalindrome(s,st,end)){        
                temp.push_back(s.substr(st,end-st+1));
                helper(ans,s,temp,end+1);
                temp.pop_back();
            }
        }        
    }

    vector<vector<string>> partition(string s) {
        int st=0;
        vector<string>temp;
        vector<vector<string>>ans;
        helper(ans,s,temp,st);
        return ans;

    }
};