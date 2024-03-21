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
    ListNode* reverseList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *x=head;
        ListNode *n=x->next;
        ListNode *p=NULL;
        while(x->next){
            x->next=p;
            p=x;
            x=n;
            n=n->next;
        }
        x->next=p;
        head=x;
        
        
        return head;
                
    }
};