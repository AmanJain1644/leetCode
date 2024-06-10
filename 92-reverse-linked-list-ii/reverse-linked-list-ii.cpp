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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head || !head->next)return head;
        if(left==right)return head;

        ListNode *dummy = new ListNode();
        dummy->next = head;
        ListNode *prev = dummy;
        for(int i=1;i<left;i++){
            prev=prev->next;
        }
        ListNode*temp1 = prev;
        ListNode*temp2=prev->next;
        prev = prev->next;
        ListNode *curr = prev->next;
        ListNode *n = curr->next;
        for(int i=1;i<=right-left-1     ;i++){
            curr->next = prev;
            cout<<curr->val<<endl;
            prev = curr;
            curr = n;
            n = n->next;
        }
        curr->next =  prev;
        temp1->next = curr;
        temp2->next = n;
        
        return dummy->next;

    }
};