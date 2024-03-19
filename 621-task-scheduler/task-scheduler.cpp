class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int>chars(26);
        for(int i=0;i<tasks.size();i++){
            chars[tasks[i]-'A']++;
        }
        sort(chars.begin(),chars.end(),greater<int>());
        int idle=(chars[0]-1)*n;
    
        for(int i=1;i<26;i++){
            idle-=min(chars[0]-1,chars[i]);
        }
    

        return tasks.size()+max(0,idle);
        

        
    }
};