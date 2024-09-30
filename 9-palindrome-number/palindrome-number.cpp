class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        int num=x;
        int rev=0;
        while(x){
            if(rev>INT_MAX/10){
                return false;
            }
            rev=rev*10+x%10;
            x/=10;
        } 
        if(rev==num){
            return true;
        } 
        return false;
    }
};