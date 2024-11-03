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
    ListNode* sortList(ListNode* head) {
        ListNode* x = head;
        vector<int>nodes;
        while(x){
            nodes.push_back(x->val);
            x=x->next;
        }  
        sort(nodes.begin(),nodes.end());
        x=head;
        for(auto node:nodes){
            x->val=node;
            x=x->next;
        }
        return head;

    }
};