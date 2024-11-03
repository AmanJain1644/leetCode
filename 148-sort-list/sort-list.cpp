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
    void merge(vector<int>&nodes,int st,int mid,int ed){
        vector<int>L = {nodes.begin()+st,nodes.begin()+mid+1};
        vector<int>R = {nodes.begin()+mid+1,nodes.begin()+ed+1};
        int i=0,j=0,k=st;
        while(i<L.size() && j<R.size()){
            if(L[i]<=R[j]){
                nodes[k++]=L[i++];
            }else{
                nodes[k++]=R[j++];
            }
        }

        while(i<L.size()){
            nodes[k++]=L[i++];
        }

        while(j<R.size()){
            nodes[k++]=R[j++];
        }

    }
  void divide(vector<int>&nodes,int st,int ed){
        if(ed-st+1 <=1 ) return;
        int mid = st+(ed-st)/2;
        divide(nodes,st,mid);
        divide(nodes,mid+1,ed); 
        merge(nodes,st,mid,ed); 
    }

    ListNode* sortList(ListNode* head) {
        ListNode* x = head;
        vector<int>nodes;
        while(x){
            nodes.push_back(x->val);
            x=x->next;
        }
        divide(nodes,0,nodes.size()-1);  
        x=head;
        for(auto node:nodes){
            x->val=node;
            x=x->next;
        }
        return head;

    }
};