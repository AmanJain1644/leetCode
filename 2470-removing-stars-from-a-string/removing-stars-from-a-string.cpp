class Solution {
public:
    string removeStars(string s) {
        stack<int>stack;
        for(auto val:s){
            if(val=='*' && !stack.empty()){
                stack.pop();
            }else{
                stack.push(val);
            }
        }
        s.clear();
        s="";
        while(!stack.empty()){
            s+=stack.top();
            stack.pop();
        } 
        int n=s.size();
        int i=0;
        while(i<n/2){
            swap(s[i],s[n-i-1]);
            i++;
        }
        return s;

    }
};