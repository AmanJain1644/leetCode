class Solution {
public:
    int maxDepth(string s) {
        stack<int>sk;
        int n=s.size();
        int count=0;
        int ans=0;
        for(int i=0; i<n; i++){
            if(s[i]=='('){
                count++;
                sk.push(s[i]);
            }else if(s[i]==')'){
                sk.pop();
                ans=max(ans,count);
                count--;
            }
        }
        return ans;

    }
};