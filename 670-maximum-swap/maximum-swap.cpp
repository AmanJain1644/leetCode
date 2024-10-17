class Solution {
public:
    int maximumSwap(int num) {
        vector<int>digits;
        while(num){
            digits.push_back(num%10);
            num/=10;
        }        
        reverse(digits.begin(),digits.end());
        int n = digits.size();

        vector<int>greater(n);
        greater[n-1] = n-1;
        for(int i=n-2;i>=0;i--){
            if(digits[i]>digits[greater[i+1]]){
                greater[i]=i;
            }else{
                greater[i]=greater[i+1];
            }
        }

        for(int i=0;i<n;i++){
            if(digits[i]<digits[greater[i]]){
                swap(digits[i],digits[greater[i]]);
                break;
            }
        }

        int ans = 0;
        for(int i=0;i<n;i++){
            ans = ans*10 + digits[i];
        }
        return ans;
    }
};