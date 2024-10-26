class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> zeroCount;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    zeroCount.push_back({i,j});
                }
            }
        }    

        for(pair point:zeroCount){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    matrix[point.first][j]=0;
                    matrix[i][point.second]=0;
                }
            }
        }        
    }
};