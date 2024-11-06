class Solution {
public:
    int setbits(int n){
        int count = 0;
        while(n){
            if(n&1)count++;
            n>>=1;
        }
        return count;
    }
    bool canSortArray(vector<int>& arr) {
        for(int i=1;i<arr.size();i++){
            for(int j=i;j>0;j--){
                if(arr[j]<arr[j-1]){
                    if(setbits(arr[j])!=setbits(arr[j-1])) return false;
                    std::swap(arr[j],arr[j-1]);
                }
            }
        }
        return true;        
    }
};