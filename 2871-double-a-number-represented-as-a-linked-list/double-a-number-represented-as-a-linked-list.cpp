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
    ListNode* doubleIt(ListNode* head){
        ListNode* dummy = new ListNode();
        ListNode*prev = NULL;
        ListNode*curr = head;
        ListNode*nxt = curr->next;
        while(nxt){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=prev;
        head=curr;
        ListNode*x=dummy;
        ListNode*y=head;
        int carry=0;
        while(y){
            int twice = y->val*2;
            x->val=twice%10+carry;
            if(twice>9){
                carry=1;
            }else{
                carry=0;
            }
            if(!y->next)break;
            ListNode* newy = new ListNode();
            x->next = newy;
            x=x->next;
            y=y->next;
        }
        if(carry){
            x->next=new ListNode(1);
        }
        prev = NULL;
        curr = dummy;
        nxt = curr->next;
        while(nxt){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=prev;
        dummy=curr;
        return dummy;

    }
};