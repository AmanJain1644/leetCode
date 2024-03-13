class Solution {
public:

    int sqrt(int num){
            int st=1;
        int ed=num;
        while(st<=ed){
            int mid=st+(ed-st)/2;
            if(mid==num/mid){
                return mid;
            }else if(mid>num/mid){
                ed=mid-1;
            }else{
                st=mid+1;
            }
        }
        return ed;
        }

    bool checkPerfectNumber(int num) {
        if(num==1){
            return false;
        }        
        int n=sqrt(num);
        int sum=1;
        for(int i=2;i<=n;i++){
            if(num % i==0){
                sum+=i+num/i;
            }
        }
        return sum==num ? true : false;
        
        
    }
};