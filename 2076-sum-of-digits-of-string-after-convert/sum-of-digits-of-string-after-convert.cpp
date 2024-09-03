class Solution {
public:
    int getLucky(string s, int k) {
        int ans=0;
        string ansStr = "";
        for(auto i:s){
            ansStr+=to_string(i-'a'+1);
        }
        cout<<ansStr;     
        while(k){
            int cal = 0;
            for(auto i:ansStr){
                cal+=i-'0';
            }
            k--;
            ans=cal;
            ansStr=to_string(cal);
        }
        return ans;
    }
};