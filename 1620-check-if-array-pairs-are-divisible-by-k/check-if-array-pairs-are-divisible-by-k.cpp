class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {

        vector<int>map(k,0);
        for(int i=0;i<arr.size();i++){
            map[((arr[i]%k)+k)%k]++;
        }      

        if (map[0]%2) return false;

        for(int i=1;i<=k/2;i++){
            if(map[i]!=map[k-i]) return false;
        }  
        return true;
    }
};