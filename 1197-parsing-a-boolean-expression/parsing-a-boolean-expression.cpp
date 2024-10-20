class Solution {
public:
    bool parseBoolExpr(string expression) {

        stack<char>st;

        for(char c:expression){
            if(c==','){
                continue;
            }else{
                st.push(c);
            }

            if(!st.empty()&&st.top()==')'){
                st.pop();
                vector<char>nums;
                while(st.top()!='('){
                    nums.push_back(st.top());
                    st.pop();
                }
                st.pop();
                char operation = st.top();
                st.pop();
                char result = 'f';
                if(operation=='&'){
                    result = 't';
                    for(char c:nums){
                        if(c=='f'){
                            result = 'f';
                            break;
                        }
                    }                    
                }else if(operation == '|'){
                    for(char c:nums){
                        result='f';
                        if(c=='t'){
                            result='t';
                            break;
                        }
                    }
                }else if(operation == '!'){
                    result = nums[0]=='t'?'f':'t';
                }
                st.push(result);

            }

        }

        return st.top()=='t';
    }
};


int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();