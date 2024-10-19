class Solution {
public:
    void stringMaker(string &str,string &substr){
        int n = substr.size();
        for(int i=0;i<n/2;i++){
            swap(substr[i],substr[n-1-i]);
        }
        for(int i=0;i<n;i++){
            if(substr[i]=='1'){
                substr[i]='0';
            }else{
                substr[i]='1';
            }
        }
        str+="1"+substr;
    }
    char findKthBit(int n, int k) {
        string str = "0";
        if(n==1){
            return str[0];
        }
        for(int i=1;i<n;i++){
            string substr = str;
            stringMaker(str,substr);
        }   
        
        for(int i=0;i<str.size();i++){
            if(i+1==k){
                return str[i];
            }
        }
        return str[0]; 
    }
};


int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();
