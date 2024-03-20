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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* x = list1;
        ListNode* r1,*r2;
        int count=1;
        while(count!=a){
            x=x->next;
            count++;
        }
        r1=x;
        while(count!=b+1){
            x=x->next;
            count++;
        }
        r2=x;
        r1->next=list2;
        ListNode* y=list2;
        while(y->next){
            y=y->next;
        }
        y->next=r2->next;
        return list1;
        
    }
};