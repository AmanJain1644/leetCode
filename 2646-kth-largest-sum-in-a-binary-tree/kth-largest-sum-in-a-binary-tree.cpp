/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        priority_queue<long long,vector<long long>,greater<long long>>minHeap;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long long levelsum = 0;
            int levelSize = q.size();
            for(int i=0;i<levelSize;i++){
            TreeNode* temp  = q.front();
                q.pop();
                levelsum += temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            minHeap.push(levelsum);
        }

        if(minHeap.size()<k){
            return -1;
        }

        while(minHeap.size()>k){
            minHeap.pop();
        }

        return minHeap.top();


    }
};