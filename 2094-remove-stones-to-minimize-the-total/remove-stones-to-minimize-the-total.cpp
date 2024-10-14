class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        for(int pile:piles){
            pq.push(pile);
        }        
        while(k--){
            int top = pq.top();
            cout<<top/2<<endl;
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