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
        while(x){
            while(y){
                // cout<<x<<" "<<y<<endl;
                if(x==y){
                    
                    return x;
                }
                y=y->next;
            }
            
            x=x->next;
            y=headB;
        }     
        return NULL; 

    }
};