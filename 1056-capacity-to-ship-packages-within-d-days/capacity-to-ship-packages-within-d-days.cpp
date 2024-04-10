class Solution {
public:

    bool isPossibleSol(vector<int>& weights,int days,int sol){
        int weightSum=0;
        int c=1;
        // cout<<"hi sol "<<sol<<endl;
        for(int i=0;i<weights.size();i++){
            if(weights[i]>sol){
                // cout<<sol<<" me if me hu"<<endl;
                return false;
            }
            else if(weightSum+weights[i]>sol){
                c++;
                // cout<<sol<<" "<<c<<" "<<weightSum<<endl;
                weightSum=0;
                if(c>days){
                    // cout<<sol<<" "<<c<<" me c wale if me hu"<<endl;
                    return false;

                }
            }
            weightSum+=weights[i];
            
        }   
        return true;     
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int st = *min_element(weights.begin(),weights.end());
        int ed = accumulate(weights.begin(),weights.end(),0);
        int ans=-1;
        while(st<=ed){
            int mid = st+(ed-st)/2;
            if(isPossibleSol(weights,days,mid)){
                ans = mid;
                ed=mid-1;
                // cout<<st<<" "<<ans<<" "<<ed<<endl;
            }else{
                st=mid+1;
            }
        }
        return ans;
    }
};