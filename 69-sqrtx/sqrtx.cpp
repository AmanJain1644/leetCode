class Solution {
public:
    int mySqrt(int x) {
        int st = 1;
        int ed = x;
        int mid = 0;
        while(st<=ed){
            mid = st + (ed - st)/2;
            if(mid==x/mid) return mid;
            else if(mid<x/mid){
                st=mid+1;
            }else{
                ed=mid-1;
            }
        }   
        return ed;     
    }
};