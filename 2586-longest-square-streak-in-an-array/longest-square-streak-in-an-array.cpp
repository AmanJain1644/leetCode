class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {
        unordered_set<int>numset(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        int maxi = 0;

        for(int num:nums){
            if(numset.find(num)!=numset.end()){
                int curr = 1;
                long long nxt = (long long)num * num;
                
                while(numset.find(nxt)!=numset.end() && nxt<=sqrt(LLONG_MAX)){
                    curr++;
                    numset.erase(nxt);
                    nxt*=nxt;
                }

                maxi=max(maxi,curr);
            }
        }    

        return maxi>1?maxi:-1;            
    }
};