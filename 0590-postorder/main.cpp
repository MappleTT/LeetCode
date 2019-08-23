class Solution {
public:
    vector<int> postorder(Node* root) {
        res.clear();
        pod(root);
        return res;
    }
private:
    vector<int> res;
    void pod(Node* root){
        if(!root) return;
        queue<Node*>q;
        q.push(root);
        while(q.size()){
            auto cur = q.front();q.pop();
            for(auto next : cur->children){
                pod(next);
            }
        }
        res.push_back(root->val);
    }
};