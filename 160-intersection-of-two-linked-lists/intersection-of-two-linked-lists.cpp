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
        ListNode*x = headA;
        ListNode*y = headB;
        while(x || y){
            if(mp[x]) return x;
            else{
                if(x){
                    
                    mp[x]=true;
                    x=x->next;
                }
            }
            if(mp[y]) return y;
            else{
                if(y){

                    mp[y]=true;
                    y=y->next;

                }
            }
        }        
        return NULL;
    }
};