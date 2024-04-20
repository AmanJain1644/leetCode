class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1)return s;
        vector<string>zigzag(numRows);
        int row = 0, dir = 1;
        int i=0;
        while(true){
            if(dir){
                while(row<numRows && i<s.size()){
                    zigzag[row++]+=s[i++];
                }
                row = numRows-2;
            }else{
                while(row>=0 && i<s.size()){
                    zigzag[row--]+=s[i++];
                }
                row = 1;
            }
            dir=!dir;
            if(i>=s.size()){
                break;
            }
        }
        string ans="";
        for(int i=0;i<numRows;i++){
            ans+=zigzag[i];
        }
        return ans;

    }
};