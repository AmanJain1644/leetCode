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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        int sum=0;
        map<int,ListNode*>hash;
        hash[0]=dummy;
        while(head!=NULL){
            sum+=head->val;
            if(hash.find(sum)!=hash.end()){
                ListNode*node=hash[sum],*start=hash[sum];
                int s=sum;
                while(node!=head){
                    node=node->next;
                    s+=node->val;
                    if(node!=head){
                        hash.erase(s);
                    }
                }
                start->next=head->next;

            }else{
                hash[sum]=head;
            }
            head=head->next;
        }    
        return dummy->next;    
    }
};