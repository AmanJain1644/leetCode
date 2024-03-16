class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size()-1;
        int cols=matrix[0].size()-1;
        int total_element=(rows+1)*(cols+1);
        vector<int>ans;
        int r{0},c{0};
        int count=0;
        while(count<total_element){
            // top
            for(int j=c;j<=cols && count<total_element; j++){
                ans.push_back(matrix[r][j]);
                count++;
            }
            r++;

            // right
            for(int i=r;i<=rows && count<total_element; i++){
                ans.push_back(matrix[i][cols]);
                count++;
            }
            cols--;

            // bottom
            for(int j=cols;j>=c && count<total_element; j--){
                ans.push_back(matrix[rows][j]);
                count++;
            }
            rows--;
            
            // left
            for(int i=rows;i>=r && count<total_element; i--){
                ans.push_back(matrix[i][c]);
                count++;
            }
            c++;
        }
        // cout<<total_element;
        return ans;
    }
}; 