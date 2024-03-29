class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int r = rows-1;
        int c = 0;
        
        while(r>=0 && c<cols){
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                r--;
            }else{
                c++;
            }

        }   
        return false;     
        
    }
};