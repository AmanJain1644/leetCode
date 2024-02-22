class Solution {
    public boolean isPowerOfTwo(int n) {
        int check=1;
        while(n>1 && ((n&check)==0)){
            n=n>>1;
        }
        if (n==1) return true;
        return false;
        
    }
}