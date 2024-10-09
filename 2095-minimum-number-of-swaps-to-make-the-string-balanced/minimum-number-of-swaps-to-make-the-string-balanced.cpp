class Solution {
public:
    int minSwaps(string s) {
        stack<char>st;
        int n = s.size();
        int imbalanceCount = 0;

        for (int i=0;i<n;i++) {
            char c = s[i];
            if (c == '[') {
                st.push(c);
            } else {
                if(!st.empty() && st.top()=='['){
                    st.pop();
                }else {
                    imbalanceCount++;
                }
            }

        }

        return (imbalanceCount+1)/2;
    }
};
