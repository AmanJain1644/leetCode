class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>ans;
        int n=intervals.size();
        int i=0;
        int flag=1;
        while(i<n){
            
            auto it = intervals[i];
            if(newInterval[0]>it[1]){
                ans.push_back(it);
            }
            else if(it[0]>newInterval[1]){
                ans.push_back(newInterval); 
                newInterval=it;
            }           
            else{
                newInterval[0]=min(newInterval[0],it[0]);
                newInterval[1]=max(newInterval[1],it[1]);
            }
            
            i++;

        }    
        ans.push_back(newInterval);
        return ans;           
    }
};