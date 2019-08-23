class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return NULL;
        SearChBST(root,val);
        return ret;
    }
private:
    TreeNode *ret=NULL;
    void SearChBST(TreeNode *root,int val){
        if(root==NULL){
            return ;
        }
        if(root->val==val){
            ret=root;
        }
        else if(root->val<val){
            SearChBST(root->right,val);
        }
        else
            SearChBST(root->left,val);
    }
};