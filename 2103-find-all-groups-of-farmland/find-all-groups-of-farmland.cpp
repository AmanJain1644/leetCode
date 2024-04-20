class Solution {
public:
    vector<int> static checker(vector<vector<int>>& land,int i,int j,int& lx,int& ly,int& mx,int& my){
        if(i<0 || j<0 || i>=land.size() || j>=land[0].size()){
            return vector<int>{lx,ly,mx,my};
        }
        if(land[i][j]==0){
            return vector<int>{lx,ly,mx,my};
        }
        land[i][j]=0;
        lx=min(i,lx);
        ly=min(j,ly);
        mx=max(i,mx);
        my=max(j,my);
        vector<int>result= checker(land,i-1,j,lx,ly,mx,my);
        result = checker(land,i+1,j,lx,ly,mx,my);
        result = checker(land,i,j-1,lx,ly,mx,my);
        result = checker(land,i,j+1,lx,ly,mx,my);
        return result;


    }
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        vector<vector<int>>ans;
        int rows = land.size();
        int cols = land[0].size();
        int count = 0;
        vector<int>cord ={-1};
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(land[i][j]){
                    int lx=i,mx=i;
                    int ly=j,my=j;
                    ans.push_back(checker(land,i,j,lx,ly,mx,my));
                    count++;
                }
            }
        } 
        return ans;              
    }
};