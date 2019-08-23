class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return arr;
        data.push(root);
        while(!data.empty()){
            TreeNode *node=data.top();
            arr.push_back(data.top()->val);
            data.pop();
            if(node->right!=NULL)
            data.push(node->right);
            if(node->left!=NULL)
            data.push(node->left);
        }
        return arr;
    }
private:
    vector<int>arr;
    stack<TreeNode *>data;
};
