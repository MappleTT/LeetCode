class Solution {
public:
    int maxDepth(Node* root) {
        if(root==NULL){
            return depth;
        }
        arr.push(root);
        while(!arr.empty()){
            int size=(int)arr.size();
            for(int i=0;i<size;i++){
                for(int j=0;j<arr.front()->children.size();j++)
                    arr.push(arr.front()->children[j]);
                arr.pop();
            }
            depth++;
        }
        return depth;
    }
private:
    queue<Node *>arr;
    int depth=0;
};