class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size()-1;
        while(n>=-1){
            if(n==-1){ 
                digits.insert(digits.begin(),1);
                break;
            }
            if(digits[n]+1>9){                
                digits[n]=0;
                n--;
            }else{
                digits[n]+=1;
                break;
            }
        }   
        return digits;   
    }
};