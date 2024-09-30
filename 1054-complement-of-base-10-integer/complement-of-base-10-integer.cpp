class Solution {
public:
    int bitwiseComplement(int n) {
        
        if(n==0) return 1;
        int ans=0;
        int mul=1;
        while(n){
            int rem = (n&1)^1;
            ans +=rem*mul;
            n=n>>1;
            mul=mul<<1;
        }  
        return ans;      
    }
};