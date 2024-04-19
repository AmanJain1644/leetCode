class Solution {
public:
    int compress(vector<char>& chars) {
        int index=0,count=1,n=chars.size();
        char prev = chars[0];
        if(n==1)return 1;
        for(int i=1;i<n;i++){
            if(chars[i]==prev){
                count++;
            }else{
                chars[index++]=prev;
                if(count>1){
                    int start = index;
                    while(count){
                        chars[index++]=count%10 +'0';
                        count/=10;
                    }
                    reverse(chars.begin()+start,chars.begin()+index);
                }
                count=1;
                prev=chars[i];
            }       
            
        }
        chars[index++]=prev;
        if(count>1){
        int start = index;

            while(count){
                chars[index++]=count%10 +'0';
                count/=10;
            }
        reverse(chars.begin()+start,chars.begin()+index);

        }
        return index;
                
    }
};