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
    TreeNode* tree(vector<int>& preorder, vector<int>& inorder,int&preindex,int size,int inorderStart,int inorderEnd,unordered_map<int,int>&treevalues){

        if(preindex>=size || inorderStart>inorderEnd) return NULL;
        
        int value = preorder[preindex++];
        TreeNode* root = new TreeNode(value);

        int pos = treevalues[value];
        root->left=tree(preorder,inorder,preindex,size,inorderStart,pos-1,treevalues);
        root->right=tree(preorder,inorder,preindex,size,pos+1,inorderEnd,treevalues);
        return root;


    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {

        int size = inorder.size();
        unordered_map<int,int>treevalues;
        int preindex = 0;

        for(int i=0;i<size;i++){
            treevalues[inorder[i]]=i;
        }

        return tree(preorder,inorder,preindex,size,0,size-1,treevalues);  
    }
};