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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans;
        int n = 0;
        ListNode*x = head;
        while(x){
            x=x->next;
            n++;
        }
        

        int baseCount = n/k;
        int extraCount = n%k;
        for(int i=0;i<k;i++){
            int len = baseCount;
            if(i<extraCount){
                len++;
            }

            if(head){
                ListNode*x=head;
                ListNode*dummy = new ListNode;
                dummy->next = x;
                ListNode*y=dummy;
                while(len){
                    y=y->next;
                    len--;
                }
                if(y){
                    head=y->next;
                    y->next=NULL;
                }else{

                    head=NULL;
                }
                ans.push_back(x);
            }else{
                ListNode*x=NULL;
                ans.push_back(x);
            }
        }
        return ans;        
         
    }
};