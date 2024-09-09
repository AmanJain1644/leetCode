class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        int len = original.size();
        if(len>m*n || len<m*n){
            return {};
        }  
        vector<vector<int>>ans;
        int count = 0;
        while(m){
            vector<int>numRow;
            for(int i=0;i<n;i++){
                numRow.push_back(original[i+count]);
            }
            ans.push_back(numRow);
            m--;
            count+=n;
            
        }   
        return ans;   
    }
};