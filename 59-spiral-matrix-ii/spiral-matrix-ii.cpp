class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int r{0},c{0};
        int rows{n-1},cols{n-1};
        int count=0;
        vector<vector<int>>ans(n,vector<int>(n));
        while(count<=n*n){

            //top
            for(int i=c;i<=cols;i++){
                ans[r][i]=++count;
            }
            r++;
            if(count>=n*n) break;
            //right
            for(int i=r;i<=rows;i++){
                ans[i][cols]=++count;
            }
            cols--;
            if(count>=n*n) break;
            //bottom
            for(int i=cols;i>=c;i--){
                ans[rows][i]=++count;
            }
            if(count>=n*n) break;
            rows--;
            //left
            for(int i=rows;i>=r;i--){
                ans[i][c]=++count;
            }
            c++;
            if(count>=n*n) break;

        }

        return ans;

    }
};