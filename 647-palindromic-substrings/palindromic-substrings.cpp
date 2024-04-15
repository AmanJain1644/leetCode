class Solution {
public:

    int expandAroundIndex(int i,int j,string s){
        int count=0;
        while(i>=0 && j<s.length() && s[i]==s[j]){
            count++;
            i--;
            j++;
        }
        return count;
    }
    int countSubstrings(string s) {
        int n = s.length();
        int count = 0;
        
        for(int i=0;i<n;i++){
            // odd
            int oddAns = expandAroundIndex(i,i,s);
            count+=oddAns;
            int evenAns = expandAroundIndex(i,i+1,s);
            count+=evenAns;
        }

            
        return count;
    }

};