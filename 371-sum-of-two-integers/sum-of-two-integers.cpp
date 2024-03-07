class Solution {
public:
    int getSum(int a, int b) {
        int carry=a&b;
        int sum=a^b;
        carry<<=1;
        while(carry){
           int temp1=sum;
           int temp2=carry;
           sum=temp1^temp2;
           carry=temp1&temp2;
           carry<<=1;
        }
        return sum;
        
    }
};