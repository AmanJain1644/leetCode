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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* x = head; 
        int size = 0;
        while(x){
            x=x->next;
            size++;
        }
        ListNode*dummy = new ListNode;
        dummy->next  =  head;
        n=size-n;
        
        int i = 0;
        x=dummy;
        while(i++!=n){
            x=x->next;        
        }
        ListNode*temp =x->next;
        x->next = temp->next;
        temp->next = NULL;
        return dummy->next;
    }
};