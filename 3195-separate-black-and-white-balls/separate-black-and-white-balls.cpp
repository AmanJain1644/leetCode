class Solution {
public:
    long long minimumSteps(string s) {
        long long count = 0;
        int left = 0;
        int n = s.length();
        int right = n-1;
        while(left<right){
            if(s[left]-'0'){
                while(s[right]-'0' && right>left){
                    right--;
                }
                if(right>left){
                swap(s[left],s[right]);
                right--;
                count+=right-left+1;
                }
            }else{
                left++;
            }

        }  
        return count;      
    }
};