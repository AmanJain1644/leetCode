class Solution {
public:

    int binary(vector<int>&arr, int x){
        int st = 0;
        int ed = arr.size() -1;
        int ans = ed;
        while(st<=ed){
            int mid = st + (ed - st)/2;
            if(arr[mid]>=x){
                ans=mid;
                ed=mid-1;
            }else if(x > arr[mid]){
                st = mid+1;

            }
        }
        return ans;
    }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        // approach -2 binary search
        int h = binary(arr,x);
       
        int l = h-1;
        while(k--){
            if(l<0){
                h++;
            }else if(h>= arr.size()){
                l--;
            }else if(x-arr[l]>arr[h]-x){
                h++;
            }else{
                l--;
            }
            
        }
        return vector<int>(arr.begin()+l+1,arr.begin()+h);

    }
};