class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int peri=0;
        int rows = grid.size();
        int cols = grid[0].size();
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]){
                    int row=i;
                    int col=j;
                    if(row+1==rows || grid[row+1][col]==0){
                        peri++;
                    }
                    if(col+1==cols || grid[row][col+1]==0){
                        peri++;
                    }
                    if(col-1<0 || grid[row][col-1]==0){
                        peri++;
                    }
                    if(row-1<0 || grid[row-1][col]==0){
                        peri++;
                    }
                }
            }
        }
        return  peri;        
    }
};