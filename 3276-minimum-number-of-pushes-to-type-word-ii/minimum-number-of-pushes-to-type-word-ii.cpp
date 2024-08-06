class Solution {
public:
    static bool compare(int a,int b){
        return a>b;
    }
    int minimumPushes(string word) {
        int arr[26];
        for(char &ch:word){ 
            arr[ch-'a']++;
        }
        sort(arr,arr+26,compare);
        int counter = 1;
        int sum=0;
        for(int i=0;i<26;i++){
            if(!arr[i])
                break;

            if(i && i%8==0){
                counter++;
            }
            sum+=arr[i]*counter;
            cout<<sum;
        }
        return sum;
    }
};