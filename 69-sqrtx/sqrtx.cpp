class Solution {
public:
    int mySqrt(int x) {
        long i=1;
        while(i*i<=x){
            i+=1;
        }
        return i-1;
    }
};