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
    ListNode* removeNodes(ListNode* head) {
        ListNode *dummy = new ListNode();
        ListNode *prev = NULL;
        ListNode *curr = head;
        ListNode *nxt = curr->next;
        while(nxt){
            curr->next=prev;
            prev=curr;
            curr=nxt;
            nxt=nxt->next;
        }
        curr->next=prev;
        head=curr;
        ListNode *x = head->next;
        dummy->val = head->val;
        ListNode *y = dummy;
        while(x){
            if(y->val<=x->val){
                ListNode *newy = new ListNode();
                newy->val = x->val;
                y->next = newy;
                y=y->next;
            }
            x=x->next;

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