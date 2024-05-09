class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        sort(happiness.begin(),happiness.end(),greater<int>());
        for(int i=0;i<k;i++){
            happiness[i]=max(0,happiness[i]-i);
            sum+=happiness[i];
            
        }
        return sum;
    }
};