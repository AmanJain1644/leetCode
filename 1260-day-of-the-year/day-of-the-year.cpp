class Solution {
public:
    bool isLeapYear(int num){
        if(num%400==0) return true;
        if(num%100==0) return false;
        if(num%4==0) return true;
        return false;
    }
    int dayOfYear(string date) {
        int dates[3];
        stringstream ss(date);
        int i = 0;
        string num;
        while(getline(ss,num,'-')){
            dates[i]=stoi(num);
            i++;
        }  
        
        int ans = dates[2];
        int Month_days[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        if(dates[1]>2){
            bool isLeap = isLeapYear(dates[0]);
            if(isLeap){
                Month_days[1]=29;
            }
        }

        for(int i=0;i<dates[1]-1;i++){
            ans+=Month_days[i];
        }
        return ans;


    }
};