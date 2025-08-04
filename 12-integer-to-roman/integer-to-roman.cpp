class Solution {
public:
    std::unordered_map<int,std::string>ior_map = {{1,"I"},{5,"V"},{10,"X"},{50,"L"},{100,"C"},{500,"D"},{1000,"M"}};
    std::string str = "";
    int div = 1;

    string intToRoman(int num) {
        if (num <1 || num>3999){
            return "";
        }
        while(num && div <=1000){
            if(ior_map.find(num*div)!=ior_map.end()){
               return  str = ior_map[num*div] + str;
            }
            int val = num%10*div;
            num = num/10;
            if(val == 0){
                div*=10;
                continue;
            }
            if(ior_map.find(val)!=ior_map.end()){
                str= ior_map[val] + str;
            }else{
                if(val == 9*div){
                    str = ior_map[div]+ior_map[10*div] + str;
                }
                else if(val > 5*div){
                    int count = 5*div;
                   std::string temp_str = ior_map[5*div];
                    while(val>count){
                        temp_str = temp_str + ior_map[div];
                        count += div;
                    }
                    str = temp_str + str;
                }else{
                    if(val == 4*div){
                        str = ior_map[div] + ior_map[5*div] + str;
                    }else{
                        int count = div;
                        std::string temp_str = ior_map[div];
                        while(count < val ){
                            temp_str += ior_map[div];
                            count += div;
                        }
                        str = temp_str + str;
                    }
                }
               
            }
            div*=10;

        }       
        return str; 
    }
};