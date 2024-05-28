class Solution {
public:
    static int equalSubstring(string& s, string& t, int maxCost) {
        const int n=s.size();
        vector<int> sum(n+1, 0);
        for(int i=0; i<n; i++)
            sum[i+1]=sum[i]+abs(s[i]-t[i]);
        
        int l=0, r, len=0;
        for(r=0; r<n; r++){
            int cost=sum[r+1]-sum[l];
            if (cost> maxCost) {
                l=lower_bound(sum.begin()+(l+1), sum.end(), cost-maxCost)-sum.begin();
                cost=sum[r+1]-sum[l];
            }
            len=max(len, r-l+1);
        }
        return len;
    }
};