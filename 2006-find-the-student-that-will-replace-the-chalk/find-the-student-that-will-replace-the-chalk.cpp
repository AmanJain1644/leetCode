class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        long sum=0;
        for(int i:chalk){
            sum+=i;
        }
        while(true){
            if(sum<=k){
                k-=sum;
            }else{
                for(int i=0;i<chalk.size();i++){
                    if(chalk[i]<=k && k>0){
                        k-=chalk[i];
                    }else{
                        return i;
                    }
                }
            }
        }
        
        return 0;        
    }
};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();