class Solution {
public:
    long long minimumSteps(string s) {
        int n = s.length();
        int left = 0;
        int right = n-1;
        long long count = 0;
        while(left<right){
            while(s[left]=='0' && right>left){
                left++;
            }
            while(s[right]=='1' && right>left){
                right--;
            }
            
            if(s[left]=='1' && right>left){
                count += right-left;
                left++;
                right--;
            }
        }  
        return count;      
    }
};