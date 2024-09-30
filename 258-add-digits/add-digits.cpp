class Solution {
public:
    int addDigits(int num) {
        if(!num) return 0;
        return 1 + (num-1)%9;
    }
};