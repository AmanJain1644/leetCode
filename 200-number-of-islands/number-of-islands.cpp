class Solution {
public:
    void static checker(vector<vector<char>>& grid,int i,int j){
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
            return;
        }
        if(grid[i][j]=='0'){
            return;
        }
        grid[i][j]='0';
        checker(grid,i-1,j);
        checker(grid,i+1,j);
        checker(grid,i,j-1);
        checker(grid,i,j+1);
        
    }
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                
                if(grid[i][j]=='1'){
                    checker(grid,i,j);
                    count++;
                }
            }
        }  
        return count;              
    }
};