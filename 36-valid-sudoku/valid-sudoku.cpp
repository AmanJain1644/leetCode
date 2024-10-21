class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        unordered_map<char,int>row;
        unordered_map<char,int>col;
        unordered_map<char,int>box;


        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.'){
                    continue;
                }
                else if(row[board[i][j]]>0){
                    return false;
                }else{
                    row[board[i][j]]++;
                }
            }
            row.clear();
        }     

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[j][i]=='.'){
                    continue;
                }
                else if(col[board[j][i]]>0){
                    return false;
                }else{
                    col[board[j][i]]++;
                }
            }
            col.clear();
        }   

        for(int i=0;i<9;i+=3){
            for(int j=0;j<9;j+=3){
                    box.clear();
                    for(int r=i;r<i+3;r++){
                        for(int c=j;c<j+3;c++){
                            if(board[r][c]!='.'){
                                if(box[board[r][c]]>0){
                                    return false;
                                }else{
                                    box[board[r][c]]++;
                                }
                            }
                        }
                    }
                
            }
        }



        return true;
        
    }
};