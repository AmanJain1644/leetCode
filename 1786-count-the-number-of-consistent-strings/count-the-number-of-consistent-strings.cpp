class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        bool hash[128] = {0};
        int count = 0;
        int flag=1;
        for(char i:allowed){
            hash[i]=true;
        }

        for(string str:words){
            for(char i:str){
                flag=1;
                if(!hash[i]){
                    flag =0;
                    break;
                }

            }
            if(flag) count++;
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