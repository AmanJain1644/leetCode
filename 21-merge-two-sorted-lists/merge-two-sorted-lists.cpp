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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *dummy = new ListNode;
        ListNode *z = dummy;
        ListNode *x = list1;
        ListNode *y = list2;
        while(x && y ){
            if(x->val<y->val){
                z->next = x;
                z = z->next;
                x = x->next;
            }else{
                z->next = y;
                z = z->next;
                y = y->next;
            }
        }  

        if(x){
            z->next = x;
        }
        if(y){
            z->next = y;
        }  

        return dummy->next; 
    }

};