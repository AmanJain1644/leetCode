class Solution {
public:
    string minRemoveToMakeValid(string s) {
        int n = s.size();
        string ans = "";
        stack<int>st;
        for(int i=0;i<n;i++){        
            if(s[i]=='('){
                st.push(i);
            }else if(st.empty() && s[i]==')'){
                s[i]='$';
            }            
            else if(s[i]==')'){
                st.pop();
            }
        }
        while(!st.empty()){
            s[st.top()]='$';
            st.pop();
        }
        for(int i=0;i<n;i++){
            if(s[i]!='$'){
                ans+=s[i];
            }
        }
        return ans;

    }
};