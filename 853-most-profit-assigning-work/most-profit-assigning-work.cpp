class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int sum = 0;
        for(int i=0;i<worker.size();i++){
            int maxdiff = worker[i];
            int p = 0;
            for(int j=0;j<difficulty.size();j++){
                if(difficulty[j]<=maxdiff){
                    p=max(p,profit[j]);
                }
            }
            sum+=p;
        }
        return sum;
    }
};