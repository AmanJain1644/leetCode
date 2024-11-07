class Solution {
public:
    int largestCombination(vector<int>& candidates) {
        int max_count = 0;
        for(int i=0;i<24;i++){
            int count = 0;
            for(int num:candidates){
                if(num &(1<<i)){
                    count++;
                }
            }
            max_count = max(count,max_count);
        }    
        return max_count;        
    }
};