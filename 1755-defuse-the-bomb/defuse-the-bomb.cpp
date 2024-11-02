class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int>ans(n,0);
        if(k==0) return ans;
        int check = k;
        if(check>0){
            for(int i=0;i<n;i++){
                int num = 0;
                int j = i+1;
                if(j>=n) j=0;
                while(check--){
                    if(j>=n) j=0;
                    num+=code[j];
                    j++;
                }
                check = k;
                ans[i]=num;
            }        
        }else{
            check=abs(k);
            for(int i=0;i<n;i++){
                int num = 0;
                int j = i-1;
                if(j<0) j=n-1;
                while(check--){
                    if(j<0) j=n-1;
                    num+=code[j];
                    j--;
                }
                check = abs(k);
                ans[i]=num;
            }                    
        }
        return ans;
    }
};