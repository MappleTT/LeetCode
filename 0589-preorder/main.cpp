class Solution {
public:
    vector<int> preorder(Node* root) {
        if(root==NULL)
            return arr;
        PreOrder(root);
        return arr;
    }
private:
    void PreOrder(Node *root){
        data.push(root);
        while(!data.empty()){
            Node *node=data.top();
            arr.push_back(node->val);
            data.pop();
            for(int i=(int)node->children.size()-1;i>=0;i--){
                data.push(node->children[i]);
            }
        }
    }
    vector<int>arr;
    stack<Node *>data;
};