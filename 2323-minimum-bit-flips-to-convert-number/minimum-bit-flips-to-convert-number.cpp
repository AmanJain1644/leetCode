class Solution {
public:
    int minBitFlips(int start, int goal) {
        int count = 0;
        while(start || goal){
            int s = start&1;
            int g = goal&1;
            
            if(s^g){
                count++;
            }
            start>>=1;
            goal>>=1;

        }  
        
        return count;                      
    }

};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();