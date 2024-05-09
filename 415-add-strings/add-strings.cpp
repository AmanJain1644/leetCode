class Solution {
public:
    void addstr(string& num1,int p1,string& num2,int p2,string &ans,int carry=0){
        if(p1<0 && p2<0){
            if(carry){
                ans+=carry+'0';
            }
            return;       
        }
        if(p1>=0 && p2>=0){
            int sum = num1[p1]-'0'+num2[p2]-'0'+carry;
            ans+=(sum%10)+'0';
            carry=sum/10;
        }
        else if(p1>=0){
            int sum = num1[p1]-'0'+carry;
            ans+=(sum%10)+'0';
            carry=sum/10;
        }
        else if(p2>=0){
            int sum = num2[p2]-'0'+carry;
            ans+=(sum%10)+'0';
            carry=sum/10;
        }

        addstr(num1,p1-1,num2,p2-1,ans,carry);
        


    }
    string addStrings(string num1, string num2) {
        string ans = "";
        addstr(num1,num1.size()-1,num2,num2.size()-1,ans);
        reverse(ans.begin(),ans.end());
        return ans;                
    }
};