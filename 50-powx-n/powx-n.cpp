class Solution {
public:
    double myPow(double x,long n) {
        if(n==0) return 1;
        if(n==1) return x;        
        
        int flag=0;
        if(n<0){
            n*=-1;
            flag=1;
        }
        if(n&1){
            double ans = myPow(x*x,n/2)*x;
            if(flag)return 1/ans;
            else return ans;
        }
        else {
            double ans = myPow(x*x,n/2);
            if(flag)return 1/ans;
            else return ans;
        }
        
        
    }
};