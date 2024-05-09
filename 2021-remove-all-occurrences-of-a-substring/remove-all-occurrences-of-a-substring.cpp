class Solution {
public:
    void removeocc(string&s,string&part){
        int match = s.find(part);
        if(match != string::npos){
            string left = s.substr(0,match);
            string right = s.substr(match+part.length(),s.length());
            s=left+right;
            removeocc(s,part);
        }else{
            return ;
        }
    }
    string removeOccurrences(string s, string part) {
        removeocc(s,part);
        return s;        
    }
};