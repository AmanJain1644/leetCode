class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
        vector<pair<int,int>>elements;
        int rangeLeft=0,rangeRight=0;
        int range = INT_MAX;
        int k = nums.size();
        for(int i=0;i<k;i++){
            for(int num:nums[i]){
                elements.push_back({num,i});
            }
        } 

        sort(elements.begin(),elements.end());  
        vector<int>count(k,0);
        int left = 0;
        int uniqueList = 0;

        for(int right=0;right<elements.size();right++){
            int rightList = elements[right].second;
            if(count[rightList]==0){
                uniqueList++;
            }
            count[rightList]++;

            while(uniqueList==k){
                int rightValue = elements[right].first;
                int leftValue = elements[left].first;

                if(range>(rightValue-leftValue)){
                    range=rightValue-leftValue;
                    rangeLeft=leftValue;
                    rangeRight=rightValue;
                }      

                int leftList = elements[left].second;
                count[leftList]--;
                if(count[leftList]==0){
                    uniqueList--;
                }   
                left++;     
            }
        }

        return {rangeLeft,rangeRight};                     
    }
};