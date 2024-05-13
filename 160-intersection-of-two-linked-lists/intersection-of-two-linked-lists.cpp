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
        unordered_map<ListNode*,bool>mp;
        ListNode *x = headA;
        while(x){
            mp[x]=true;
            x=x->next;
        }
        ListNode *y = headB;
        while(y){
            if(mp.find(y)!=mp.end()){
                return y;
            }
            y=y->next;
        }
        return NULL;
        

    }
};