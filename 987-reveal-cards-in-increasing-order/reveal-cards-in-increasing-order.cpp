class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        int n = deck.size();
        vector<int>ans;
        sort(deck.begin(),deck.end(),greater<>());
        deque<int>dq;
        dq.push_front(deck[0]);
        for(int i=1;i<n;i++){
            int val = dq.back();
            dq.pop_back();
            dq.push_front(val);
            dq.push_front(deck[i]);
        }  
        while(!dq.empty()){
            ans.push_back(dq.front());
            dq.pop_front();
        }
        return ans;

    }
};