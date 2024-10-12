class Solution {
public:
    int minGroups(vector<vector<int>>& intervals) {
        vector<pair<int,int>>events;
        for(int i=0;i<intervals.size();i++){
            events.push_back({intervals[i][0],1});
            events.push_back({intervals[i][1]+1,-1});
        }
        sort(events.begin(),events.end());
        int maxi = 0;
        int curr = 0;

        for(int i=0;i<events.size();i++){
            curr+=events[i].second;
            maxi=max(maxi,curr);
        }

        return maxi;

    }
};