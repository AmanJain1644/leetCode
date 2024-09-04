class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        int total = rows * cols;
        ans.push_back({rStart, cStart});
        int count = 1;

        int rowTrack = 1, colTrack = 1;

        while (count < total) {
            for (int i = 0; i < rowTrack; i++) {
                cStart++;
                if (cStart >= 0 && cStart < cols && rStart >= 0 && rStart < rows) {
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }
            rowTrack++;

            
            for (int i = 0; i < colTrack; i++) {
                rStart++;
                if (cStart >= 0 && cStart < cols && rStart >= 0 && rStart < rows) {
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }
            colTrack++;

    
            for (int i = 0; i < rowTrack; i++) {
                cStart--;
                if (cStart >= 0 && cStart < cols && rStart >= 0 && rStart < rows) {
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }
            rowTrack++;

        
            for (int i = 0; i < colTrack; i++) {
                rStart--;
                if (cStart >= 0 && cStart < cols && rStart >= 0 && rStart < rows) {
                    ans.push_back({rStart, cStart});
                    count++;
                }
            }
            colTrack++;
        }

        return ans;
    }
};
