class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end());  
        int check=points[0][1];
        for(int i=1;i<points.size();i++){
            if(check<points[i][0]){
                count++;
                check=points[i][1];
            }else{
                check=min(check,points[i][1]);
            }
            
        }
        return count;

        
    }

};