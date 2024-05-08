class Solution {
public:
    static bool comp(int a,int b){
        return a>b;
    }
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int>sc = score;
        sort(sc.begin(),sc.end(),comp);
        vector<string>ans;
        unordered_map<int,string>hash;
        for(int i=0;i<sc.size();i++){
            if(i==0){
                hash[sc[i]]="Gold Medal";
            }
            else if(i==1){
                hash[sc[i]]="Silver Medal";
            }
            else if(i==2){
                hash[sc[i]]="Bronze Medal";
            }
            else{
                hash[sc[i]]=to_string(i+1);
            }
        }
        for(int i=0;i<score.size();i++){
            ans.push_back(hash[score[i]]);
        }
        
        return ans;        
    }
};