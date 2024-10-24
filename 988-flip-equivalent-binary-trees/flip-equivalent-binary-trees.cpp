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

    bool checker(TreeNode* root1,TreeNode *root2){
        if(!root1 && !root2) return true;
        if (!root1 || !root2) return false;

        cout<<root1->val<<"  "<<root2->val<<endl;

        if(root1->val != root2->val){
            return false;
        }

       return  checker(root1->left,root2->right) && checker(root1->right,root2->left)||
               checker(root1->left,root2->left) && checker(root1->right,root2->right);
    

    }
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
       
        return  checker(root1,root2);    
              
    }
};