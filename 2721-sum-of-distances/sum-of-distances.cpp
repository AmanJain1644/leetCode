using ll = long long;
class Solution {
public:
    vector<long long> distance(vector<int>& nums){
        int n = nums.size();
        vector<ll>ans(n);
        unordered_map<int,vector<ll>>hash;
        for(int i=0; i<n; i++) hash[nums[i]].push_back(i);        
        
        for(auto it:hash){
            vector<ll>vec = it.second;

            ll sum=0;
            for(int i=0;i<vec.size();i++)sum+= (ll)vec[i];
            

            ll curr=0,rest=0;
            for(int i=0;i<vec.size();i++){
                rest=sum-curr-vec[i];
                ll leftsum=(vec[i]*(ll)i)-curr;
                ll rightsum=rest-vec[i]*(ll)(vec.size()-i-1);
                // cout<<vec[i]<<rightsum;

                ans[vec[i]]=leftsum+rightsum;
                curr+=vec[i];
            }

        }

        return ans;
        
    }
};