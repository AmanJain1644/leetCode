class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        int ans=INT_MAX;
        for(int i=0;i<timePoints.size();i++){
            string curr = timePoints[i];
            int hour = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));
            minutes.push_back(hour*60+min);
        }   

        sort(minutes.begin(),minutes.end());
        for(int i=0;i<minutes.size()-1;i++){
            ans=min(ans,(minutes[i+1]-minutes[i]));
        }  

        int last_diff = minutes[0]+1440-minutes[minutes.size()-1];
        ans= min(ans,last_diff);
        return ans;   
    }
};