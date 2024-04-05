class Solution {
public:
    string makeGood(string s) {
        int n=s.size();
        string ans="";
        stack<char>st;
        if(n==0){
            return s;
        }
        for(int i=0;i<n;i++){
            if(!st.empty() && abs(s[i]-st.top())==32){
                st.pop();
            }else{
                st.push(s[i]);
            }
           
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};