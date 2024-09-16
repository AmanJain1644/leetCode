class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int>minutes;
        int n = timePoints.size();
        int ans = INT_MAX;
        for(int i=0;i<n;i++){
            string time = timePoints[i];
            int hour = stoi(time.substr(0,2));
            int minute = stoi(time.substr(3,2));
            int total = hour*60 + minute;
            minutes.push_back(total);
        }   
        sort(minutes.begin(),minutes.end());
        for(int i=0;i<n-1;i++){
            ans=min(ans,minutes[i+1]-minutes[i]);
        }
        int last_diff = minutes[0]+1440 - minutes[n-1];

        return min(ans,last_diff);           
    }
};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();