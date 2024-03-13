class Solution {
public:
    int pivotInteger(int n) {
        int i=1;
        int j=n;
        int sum1=0;
        int sum2=0;
        while (i<=j){
            if(i==j && sum1==sum2){
                return i;
            }else if(sum1<sum2){
                sum1+=i;
                i++;
            }else{
                sum2+=j;
                j--;
            }
        }
        return -1;
        
    }
};