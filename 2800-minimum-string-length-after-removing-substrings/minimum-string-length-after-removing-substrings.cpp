class Solution {
public:
    int minLength(string s) {
        int posA = s.find("AB");
        int posC = s.find("CD");
        while(posA !=string::npos || posC != string::npos ){
        
            if(posA!=string::npos){
                s.erase(posA,2);
            }
            posC = s.find("CD");
            if(posC != string::npos){
                s.erase(posC,2);
            }
            posA= s.find("AB");
            posC = s.find("CD");

        } 
    

        return s.length();              
    }
};