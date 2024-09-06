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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int>numSet;
        for(int i=0;i<nums.size();i++){
            numSet.insert(nums[i]);
        }  
        ListNode* dummy = new ListNode;
        dummy->next = head;
        ListNode* curr = head;
        ListNode* nxt = head->next;
        ListNode* prev = dummy;
        while(curr && nxt){
            if(numSet.count(curr->val)){
                prev->next=nxt;
                curr->next = NULL;
            }else{
                prev=curr;
            }
                curr = nxt;
                nxt=nxt->next;
        }
        if(numSet.count(curr->val)){
            prev->next = NULL;
        }
        return dummy->next;

    }
};