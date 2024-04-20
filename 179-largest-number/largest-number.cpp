class Solution {
public:
    static bool cmp(string a,string b){
        string t1 = a+b;
        string t2 = b+a;
        return t1>t2;
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str;
        string ans="";
        for(auto val:nums){
            str.push_back(to_string(val));
        } 
        sort(str.begin(),str.end(),cmp);
        if(str[0]=="0")return "0";
        
        for(auto val:str){
            ans+=val;
        }
        
        return ans; 


    }
};