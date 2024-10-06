class Solution {
public:
    bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1 == sentence2) return true;
        stringstream ss1(sentence1);
        string word;
        stringstream ss2(sentence2);
        vector<string>s1;
        vector<string>s2;

        while(ss1 >> word){
            s1.push_back(word);
        }

        while(ss2 >> word){
            s2.push_back(word);
        }

        int minLength = s1.size();
        if(minLength>s2.size()){
            minLength=s2.size();
        }
        int i=0;
        int count = 0;
        while(i<s1.size() && i<s2.size()){
            if(s1[i]==s2[i]){
                count++;
            }else{
                break;
            }
            i++;
        }
        i=s1.size()-1;
        int j=s2.size()-1;
        
        while(i>=0 && j>=0){
            if(s1[i]==s2[j]){
                count++;
            }else{
                break;
            }
            i--; j--;
        }
        
        if(count>=minLength) return true;

        return false;        
        
    }
};


int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();