class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        int m = rows-2;
        int n = cols-2;
        vector<vector<int>>gen(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ans=INT_MIN;
                for(int k=i;k<i+3;k++){
                    for(int l=j;l<j+3;l++){
                        if(ans<grid[k][l]){
                            ans=grid[k][l];
                        }
                    }
                }
                gen[i][j]=ans;
            }
        }  
        return gen; 
    }
};