class Solution {
public:
    bool isCircularSentence(string sentence) {
        vector<string>words;
        istringstream iss(sentence);
        string temp;
        while(iss >> temp){
            words.push_back(temp);
        } 
        int n = words.size(); 

        for(int i=0;i<n-1;i++){
            if(words[i][words[i].size()-1]!=words[i+1][0]){
                return false;
            }
        } 
        if(words[n-1][words[n-1].size()-1]!=words[0][0]) return false;

        return true;
    }
};