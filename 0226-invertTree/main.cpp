class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)
            return NULL;
        TreeNode *node=root->right;
        root->right=root->left;
        root->left=node;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};