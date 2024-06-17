class Solution {
public:
       bool isperfectsq(int num){
            int sq = sqrt(num);
            return (sq*sq == num);
       }  
        bool judgeSquareSum(int c) {
            if(c<=1) return true;
            if(isperfectsq(c)) return true;

            for(int i=1; i<=c/i; i++){
                int sq = i*i;
                if(isperfectsq(c-sq)) return true;
            }
            return false;

        }
};