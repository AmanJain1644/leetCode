class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<pair<int,int>> directions = {{0,1},{1,0},{0,-1},{-1,0}};  

        unordered_set<string>obstacleSet;
        for(auto obstacle:obstacles){
            obstacleSet.insert(to_string(obstacle[0])+","+to_string(obstacle[1]));
        }   
        int x{0},y{0};
        int directionIndx=0;
        int maxdist = 0;

        for(int command:commands){
            if(command==-1){
                directionIndx = (directionIndx + 1)%4;
            }else if(command==-2){
                directionIndx = (directionIndx + 3)%4;
                
            }else{
                for(int step = 0; step<command; step++){
                    int newX = x+directions[directionIndx].first;
                    int newY = y+directions[directionIndx].second;

                    if(obstacleSet.count(to_string(newX)+","+to_string(newY))==0){
                        x=newX;
                        y=newY;
                        maxdist= max(maxdist,x*x+y*y);
                    }else{
                        break;
                    }
                }
            }
        }
        return maxdist;
    }
};