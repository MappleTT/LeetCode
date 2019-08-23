class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        while(root != NULL || !data.empty()){
            while(root != NULL){
                data.push(root);
                root=root->left;
            }
            if(!data.empty()){
                TreeNode *node = data.top();
                data.pop();
                arr.push_back(node->val);
                root=node->right;
            }
        }

        return arr;
    }
private:
    stack<TreeNode *>data;
    vector<int>arr;
};