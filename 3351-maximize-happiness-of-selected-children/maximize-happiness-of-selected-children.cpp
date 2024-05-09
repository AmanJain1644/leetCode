class Solution {
public:
    static bool comp(int a,int b){
        return a>b;
    }
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long sum = 0;
        sort(happiness.begin(),happiness.end(),comp);
        for(int i=0;i<k;i++){
            sum+=(happiness[i]-i)<0?0:(happiness[i]-i);
            
        }
        return sum;
    }
};