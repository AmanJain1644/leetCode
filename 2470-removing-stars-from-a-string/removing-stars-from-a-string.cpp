class Solution {
public:
    string removeStars(string s) {
        string str="";
        stack<int>stack;
        for(auto val:s){
            if(val=='*' && !stack.empty()){
                stack.pop();
            }else{
                stack.push(val);
            }
        } 
        while(!stack.empty()){
            str+=stack.top();
            stack.pop();
        } 
        int n=str.size();
        int i=0;
        while(i<n/2){
            swap(str[i],str[n-i-1]);
            i++;
        }
        return str;

    }
};