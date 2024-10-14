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
            int val = 0;
            if(top%3){
                val=(top/3)+1;
            }else{
                val = top/3;
            }
            pq.push(val);
        }
        return total;
    }
};