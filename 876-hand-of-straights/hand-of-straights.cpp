class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize!=0) return false;
        map<int ,int>hash;
        for(int i=0;i<n;i++){
            hash[hand[i]]++;
        }
        for(auto it=hash.begin(); it !=hash.end(); it++){
            if(it->second>0){
                int count = it->second;
                for(int i=0;i<groupSize;i++){
                    if(hash[it->first+i]<count){
                        return false;
                    }
                    hash[it->first+i] -= count;
                }
            }
        }
        
        return true;
    }
};