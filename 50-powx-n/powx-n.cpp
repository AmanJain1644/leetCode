class Solution {
public:
    double myPow(double x,int n) {
        if(n==0) return 1;
        if(n==1) return x;
        int flag=0;
        double result=1;
        if(n<0){
            flag=1;
            if(n==INT_MIN){
                n++;
                result*=x;
            }
            n*=-1;
        }
        while(n>0){
            if(n&1){
                result*=x;
                n--;
            }else{                
                x*=x;
                n/=2;
            }
        }

        return flag?1/result:result;
        
        
    }
};