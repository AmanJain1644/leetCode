class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int nstuds = students.size();
        int nsdwich =  sandwiches.size();
        int zcount = 0;
        int ocount = 0;
        for(int i=0;i<nstuds;i++){
            if(students[i]==1){
                ocount++;
            }else{
                zcount++;
            }
        } 

        for(int i=0;i<nsdwich;i++){
            if(sandwiches[i]==1){
                if(ocount){
                    ocount--;
                    nstuds--;
                }else{
                    return nstuds;
                }
            }else{
                if(zcount){
                    zcount--;
                    nstuds--;
                }else{
                    return nstuds;
                }
            }
        }
        return nstuds;       
    }
};