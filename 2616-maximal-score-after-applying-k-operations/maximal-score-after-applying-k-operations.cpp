class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        long long total=0;
        priority_queue<int>pq;
        for(int num:nums){
            pq.push(num);
        }        
        while(k--){
            int top = pq.top();
            total+=top;
            pq.pop();            
            pq.push(top%3==0?top/3:top/3 +1);
        }
        return total;
    }
};

int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();