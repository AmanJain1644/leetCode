class Solution {
public:
    int helper(vector<int>& cost, int indx, vector<int>& dp) {
        if (indx <= -1) return 0;
        if (dp[indx] != -1) return dp[indx];
        dp[indx] = cost[indx] + min(helper(cost, indx - 1, dp), helper(cost, indx - 2, dp));
        return dp[indx];
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> dp(n, -1); 
        return min(helper(cost, n - 1, dp), helper(cost, n - 2, dp));
    }
};
