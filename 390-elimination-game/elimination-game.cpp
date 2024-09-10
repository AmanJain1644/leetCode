class Solution {
public:
    int lastRemaining(int n) {
        int start = 1;
        int step =1;
        int remaining = n;
        bool direction = true;
        while(remaining>1){
            if(direction || remaining%2){
                start+=step;
            }
            remaining/=2;
            step*=2;
            direction=!direction;
        }     
        return start;  
    }
};