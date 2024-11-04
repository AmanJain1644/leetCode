/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        unordered_map<Node*,Node*> mp;
        Node* y = head;
        while(y){
            Node* newNode = new Node(y->val);
            mp[y]=newNode;
            y=y->next;
        }   
        y=head;
        while(y){
            mp[y]->next= y->next?mp[y->next]:nullptr;
            mp[y]->random=y->random?mp[y->random]:nullptr;
            y=y->next;
        }     
        return mp[head];
    }
};