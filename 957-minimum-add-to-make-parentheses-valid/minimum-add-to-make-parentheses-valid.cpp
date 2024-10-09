class Solution {
public:
    int minAddToMakeValid(string s) {
        int OpenCount = 0;
        int Imbalance = 0;
        for(char c:s){
            if(c=='('){
                OpenCount++;
            }else if(OpenCount){
                OpenCount--;
            }else{
                Imbalance++;
            }
        }        
        return Imbalance + OpenCount;
    }
};