class Solution {
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        return atmost_subarr_with_goal(nums, goal) - atmost_subarr_with_goal(nums, goal - 1);
    }
    int atmost_subarr_with_goal(vector<int> &nums, int goal)
    {
        if (goal < 0)
            return 0;
        int sum = 0, i = 0, count = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            sum += nums[j];
            while (sum > goal)
            {
                sum -= nums[i++];
            }
            count += (j - i + 1);
        }
        return count;
    }
};