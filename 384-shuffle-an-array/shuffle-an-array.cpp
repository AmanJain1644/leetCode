class Solution {
private:
vector<int>org;
vector<int>shuff;
public:
    Solution(vector<int>& nums) {
        org=(nums);
        shuff=(nums);        
    }
    
    vector<int> reset() {
        shuff=org;
        return shuff;                
    }
    
    vector<int> shuffle() {
        for(int i=shuff.size()-1;i>0;i--){
            int j = rand()%(i+1);
            swap(shuff[i],shuff[j]);
        }    
        return shuff;    
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */