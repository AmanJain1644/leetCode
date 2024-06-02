class Solution {
public:
    void helper(string& num1,string& num2,int p1,int p2,int carry ,string& ans){

        if(p1<0 && p2<0){
            
            if(carry){
            ans+=carry+'0';
            return;
            }else {
                return ;
            }
                
        }
        
        int n1 =(  p1>=0 ? num1[p1]:'0')-'0';
        int n2 =(  p2>=0 ? num2[p2]:'0')-'0';
        int sum = n1+n2+carry;
        int digit = (sum)%10;
        carry  =  (sum)/10;
        ans+=digit+'0';
        helper(num1,num2,p1-1,p2-1,carry,ans);

    }
    string addStrings(string num1, string num2) {
        int p1 = 0;
        int p2 = 0;
        string ans = "";
        helper(num1,num2,num1.size()-1,num2.size()-1,0,ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};