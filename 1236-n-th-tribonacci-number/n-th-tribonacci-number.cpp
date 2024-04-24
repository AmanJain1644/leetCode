class Solution {
public:
    int tribonacci(int n) {
        if(n<2)return n;
        if(n==2)return 1;

        int t1=0,t2=1,t3=1;
        int ans = 0;
        while(n-->2){
            ans=t1+t2+t3;
            t1=t2;
            t2=t3;
            t3=ans;          
            
        }
        return ans;


    }
};