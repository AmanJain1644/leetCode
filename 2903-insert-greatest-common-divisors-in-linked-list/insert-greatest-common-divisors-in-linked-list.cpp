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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode*x = head;
        ListNode*y = x->next;
        while(x && y){
            int gcd = gcdFinder(x->val,y->val);
            ListNode* newNode = new ListNode(gcd,y);
            x->next=newNode;
            x=y;
            y=x->next;
        } 
        return head;       
    }
 
    int gcdFinder(int a,int b){
        int result =  min(a,b);
        while(result){
            if(a%result==0 && b%result==0){
                return result;
            }
            result--;
        }
        return result;
    }

};
    static const int crown = [](){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        return 0;
    }();