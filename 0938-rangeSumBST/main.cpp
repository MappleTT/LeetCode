class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        InOrder(root);
        for(int i=0;i<arr.size();i++){
            if(L==arr[i])
                a=i;
            if(R==arr[i]){
                b=i;
                break;
            }
        }
        for(int i=a;i<=b;i++)
            sum+=arr[i];
        return sum;
    }
private:
    void InOrder(TreeNode *root){
        if(root!=NULL){
            InOrder(root->left);
            arr.push_back(root->val);
            InOrder(root->right);
        }
    }
    int sum=0;
    vector<int>arr;
    int a,b;
};