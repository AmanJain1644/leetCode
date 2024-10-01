class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        int yearsCount[101];
        for(int i=0;i<logs.size();i++){
            for(int j=logs[i][0];j<logs[i][1];j++){
                yearsCount[j-1950]++;
            }
        }  
        int maxYear = INT_MIN;
        int year=1950;
        for(int i=1950;i<=2050;i++){
            if(maxYear<yearsCount[i-1950]){
                maxYear=yearsCount[i-1950];
                year=i;
            }

        }   
        return year;   
    }
};