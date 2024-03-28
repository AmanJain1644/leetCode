

class Solution {
    public int mySqrt(int x) {
        int st =1;
        int ed =x;
        int mid = st+(ed-st)/2;      

        while(st<=ed){
            if(mid == x/mid){
                return mid;
            }else if(mid>x/mid){
                ed=mid-1;                
            }else{
                st=mid+1;
            }
            mid = st+(ed-st)/2;
        }  
        return ed;      
    }
}