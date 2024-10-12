class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>even;
        priority_queue<int>odd;
        vector<int>vec;
        while(num){
            vec.push_back(num%10);
            num/=10;
        } 
        int n=vec.size();   
        reverse(vec.begin(),vec.end());    

        for(int i=0;i<n;i++){
            if(vec[i]%2){
                odd.push(vec[i]);
                vec[i]=1;
            }else{
                even.push(vec[i]);
                vec[i]=0;
            }
        }

        int ans=0;
        for(int i=0;i<n;i++){
            if(vec[i]){
                ans=ans*10 + odd.top();
                odd.pop();
            }else{
                ans=ans*10 + even.top();
                even.pop();
            }
        }
        return ans;
    }
};