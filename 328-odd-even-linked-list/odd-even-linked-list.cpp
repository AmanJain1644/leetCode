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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *ohead=NULL,*otail=NULL,*ehead=NULL,*etail=NULL;
        int count=1;
        while(head){
            if(count&1){
                if(ohead==NULL){
                    ohead=head;
                    otail=head;
                    head=head->next;
                }else{
                    otail->next=head;
                    head=head->next;
                    otail=otail->next;
                }
            }else{
                if(ehead==NULL){
                    ehead=head;
                    etail=head;
                    head=head->next;
                }else{
                    etail->next=head;
                    head=head->next;
                    etail=etail->next;
                }
            }
            count++;
        }
        if(ohead==NULL){
            return ehead;
        }
        if(ehead==NULL){
            return ohead;
        }
        etail->next=NULL;
        otail->next=ehead;
        return ohead;
        
    }
};