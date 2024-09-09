/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        int count = 0;
        vector<vector<int>>ans(m,vector<int>(n,-1));
        ListNode*x = head;
        int row=0,col=0;
        int total = m*n;
        while(count<total){
// top
            for(int i=col;i<n;i++){
                if(x){
                    ans[row][i]=x->val;
                    x=x->next;
                }else{
                    ans[row][i]=-1;
                }
                count++;
            }
            row++;
            

            if(count==total){
                break;
            }
// right
            for(int i=row;i<m;i++){
                
                if(x){
                    
                    ans[i][n-1]=x->val;
                    x=x->next;
                }else{
                    ans[i][n-1]=-1;
                } 
                count++;               
            }  
            n--;
            if(count==total){
                break;
            }
// bottom
            for(int i=n-1;i>=col;i--){
                if(x){
                    ans[m-1][i]=x->val;
                    x=x->next;
                }else{
                    ans[m-1][i]=-1;
                }   
                count++;                 
            } 

            m--;
            if(count==total){
                break;
            }
// left
            for(int i=m-1;i>=row;i--){
                if(x){
                    ans[i][col]=x->val;
                    x=x->next;
                }else{
                    ans[i][col]=-1;
                }   
                count++; 
            }  
            col++; 

            if(count==total){
                break;
            }    
        }
        return ans;
                    
    }
};

static const int crown = [](){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();