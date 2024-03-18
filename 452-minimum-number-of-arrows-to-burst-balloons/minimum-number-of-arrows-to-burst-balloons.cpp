class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int count=1;
        sort(points.begin(),points.end());  
        int check=points[0][1];
        for(auto val:points){
            if(check<val[0]){
                count++;
                check=val[1];
            }else{
                check=min(check,val[1]);
            }
            
        }
        return count;

        
    }

};