class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1)return strs[0];
        string ans = "";
        int k = min(strs[0].length(),strs[1].length());
        for(int j=0;j<k;j++){
            if(strs[0][j]!=strs[1][j]){
                break;
            }
            ans+=strs[0][j];
        }

        if(ans=="")return ans;

        for(int i=2;i<n;i++){
            string check="";
            for(int j=0;j<ans.length();j++){
                if(ans[j]!=strs[i][j]){
                    break;
                }
                check+=ans[j];
            }
            ans=check;
        }

        return ans;
 
    }
};