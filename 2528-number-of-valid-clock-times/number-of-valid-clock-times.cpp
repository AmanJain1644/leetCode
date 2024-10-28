class Solution {
public:
    int countTime(string time) {
        int count = 0;
        for(int h=0;h<24;h++){
            for(int m=0;m<60;m++){
                string curr =(h<10?"0":"") + to_string(h) + ":"+ (m<10?"0":"") + to_string(m);
                bool match = true;
                for(int i=0;i<5;i++){
                    if(time[i]!='?' && time[i]!=curr[i]){
                        match=false;
                        break;
                    }
                }

                if(match) count++;
            }
        }

        return count;

    }
}; 