class Solution {
public:
    string reversePrefix(string word, char ch) {
        int indx = 0;
        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                indx=i;
                break;
            }
        }  
        reverse(word.begin(),word.begin()+indx+1);
        return word;      
    }
};