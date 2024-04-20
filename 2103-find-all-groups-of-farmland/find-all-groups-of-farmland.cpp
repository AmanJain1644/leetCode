class Solution {
public:
    
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        int rows = land.size();
        int cols = land[0].size();
        vector<int>cord ={-1};
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(land[i][j]){
                    int x = i; int y = j;
                    for(x=i;x<rows && land[x][j]; x++){
                        for(y=j;y<cols && land[x][y]; y++){
                            land[x][y]=0;
                        }
                    }
                    ans.push_back({i,j,x-1,y-1});                    
                }
            }
        } 
        return ans;              
    }
};