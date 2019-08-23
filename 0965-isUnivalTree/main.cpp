class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        InOrder(root);
        if(arr.size()==data.at(root->val))
            return true;

        return false;
    }
private:
    vector<int>arr;
    map<int,int>data;
    void InOrder(TreeNode *root){
        if(root!=NULL){
            InOrder(root->left);
            arr.push_back(root->val);
            if(data.count(root->val)==0){
                data.insert(pair<int,int>(root->val,1));
            }else{
                data.at(root->val)++;
            }
            InOrder(root->right);
        }
    }
};