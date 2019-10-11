#include<iostream>
#include<vector>
using namespace std;

class Solution {

private:
    vector<bool>col;
    vector<bool>left;
    vector<bool>right;

    vector<vector<string>>res;

private:
    void queue(int n,int index,vector<int>&p){
        if(index==n){
            res.push_back(change(n,p));
            return ;
        }
        for(int i=0;i<n;i++){
            // 尝试将第index行的皇后摆放在第i列,左对角线是行和列相加，右对角线是行减列然后加上n-1(剪枝操作)
            if(!col[i]&&!left[index+i]&&!right[index-i+n-1]){
                col[i]=true;
                left[index+i]=true;
                right[index-i+n-1]=true;
                p.push_back(i);
                queue(n,index+1,p);
                //如果递归失败，说明此种方式不行，那么取出上一次的皇后的位置的左右同列进行标记false，往上回溯
                col[i]=false;
                left[index+i]=false;
                right[index-i+n-1]=false;
                p.pop_back();
            }
        }
    }

    vector<string>change(int n,vector<int>&p){
        vector<string>vec(n,string(n,'.'));
        for(int i=0;i<n;i++){
            vec[i][p[i]]='Q';
        }
        return vec;
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        res.clear();
        col=vector<bool>(n,false);
        right=vector<bool>(2*n-1,false);
        left=vector<bool>(2*n-1,false);
        vector<int>p;
        queue(n,0,p);
        return res;
    }
};
int main()
{



    return 0;
}