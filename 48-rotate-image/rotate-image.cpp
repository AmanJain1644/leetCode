class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        for(int i=0;i<rows;i++){
            for(int j=i;j<cols;j++){
                swap(matrix[i][j],matrix[j][i]);         
            }
        }
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols/2;j++){
                swap(matrix[i][j],matrix[i][cols-1-j]);
            }            
        }

    }
};