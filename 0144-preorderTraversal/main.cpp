class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return arr;
        data.push(root);
        while(!data.empty()){
            TreeNode *node=data.front();
            arr.push_back(data.front()->val);
            data.pop();
            if(node->left!=NULL)
                data.push(node->left);
            if(node->right!=NULL)
                data.push(node->right);
        }
        return arr;
    }
private:
    vector<int>arr;
    queue<TreeNode *>data;
};