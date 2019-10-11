#include<iostream>
#include<vector>
using namespace std;
//解法一
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {

private:
    vector<int>vector1,vector2;
    void  preOrder1(TreeNode *p){
        if(p!=NULL){
            vector1.push_back(p->val);
            preOrder1(p->left);
            preOrder1(p->right);
        }
        else
            vector1.push_back(-1);
    }
    void  preOrder2(TreeNode *p){
        if(p!=NULL){
            vector2.push_back(p->val);
            preOrder2(p->left);
            preOrder2(p->right);
        }
        else
            vector2.push_back(-1);
    }
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        //利用前序遍历将树中所有的值放到数组中，如果树的某个节点的值为NULL,那么这个值为-1
        preOrder1(p);
        preOrder2(q);
        //如果长度不相等，说明结构不同，返回false
        if(vector1.size()!=vector2.size())
            return false;
        //否则，继续查看每个对应的位置的值是否相同，如果有一个位置的值不一样，那么返回false
        for(int i=0;i<vector2.size();i++){
            if(vector1[i]!=vector2[i]){
                return false;
            }
        }
        return true;
    }
};


//解法二，Java代码,递归
/*
class Solution {
public boolean isSameTree(TreeNode p, TreeNode q) {
        // p的左节点和q的左节点都为空||p的右节点和q的右节点都为空 的情况，那么结构相同，不存在值，满足条件，返回true
        if (p == null && q == null) return true;
        // 有一个节点为空，一个节点不为空的情况
        if (q == null || p == null) return false;
        // 相同位置的值不同的情况
        if (p.val != q.val) return false;
        // 两个节点都不为空的情况，那么继续递归的情况
        return isSameTree(p.right, q.right) &&
               isSameTree(p.left, q.left);
    }
}
*/
int main()
{



    return 0;
}