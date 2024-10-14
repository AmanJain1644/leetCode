class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int pile:piles){
            pq.push(pile);
        }        
        while(k--){
            int top = pq.top();
            pq.pop();
            pq.push(top - top/2);

        }
        int total = 0;
        while(!pq.empty()){
            total+=pq.top();
            pq.pop();
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
