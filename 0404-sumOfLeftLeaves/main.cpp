/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int sum=0;
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL)
            return 0;
        leftsum(root,NULL);
        return sum;
    }

    void leftsum(TreeNode *root,TreeNode *parent){
        if(root==NULL)
            return ;
        if(root->left==NULL&&root->right==NULL&&parent!=NULL&&parent->left==root){
            sum+=root->val;

        }
        leftsum(root->left,root);
        leftsum(root->right,root);
    }
};