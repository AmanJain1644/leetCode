/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *x = headA;
        ListNode *y = headB;
        while(y){
            while(x){
                if(x==y) return x;
                x=x->next;
            }
            x=headA;
            y=y->next;
        }  

        return NULL;      
    }
};