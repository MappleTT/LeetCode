
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ret;
        queue<Node *>arr;
        if(root==NULL)
            return ret;
        arr.push(root);

        while(!arr.empty()) {
            vector<int>a;
            int len=arr.size();
            for(int i=0;i<len;i++) {

                root = arr.front();
                arr.pop();
                a.push_back(root->val);

                for (int j = 0; j <root->children.size() ; j++) {
                    arr.push(root->children[j]);
                }
            }
            ret.push_back(a);
        }
        return ret;
    }
};