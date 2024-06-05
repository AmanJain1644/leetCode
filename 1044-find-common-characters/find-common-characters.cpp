class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        string str= words[0];
        vector<string>ans;
        int n = words.size();
        for(int i=1;i<n;i++){
            string word= words[i];
            string cmp = "";
            for(char ch1 : str ){
                for(int i=0;i<word.size();i++){
                    char ch2 = word[i];
                    if(ch1==ch2){
                        cmp+=ch1;
                        word[i]='1';
                        break;
                    }    
                }
            }  
            str=cmp;         
        }
        for(char ch:str){
            string s = "";
            s+=ch;
            ans.push_back(s);
        }
        return ans;

        
    }
};