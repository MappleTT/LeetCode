class NumArray {
public:
    NumArray(vector<int> &nums) {
        n=nums.size();
        data=new int [n];
        tree=new int [4*n];
        if(nums.size()==0)
            return ;
        if(nums.size()>0) {
            for (int i = 0; i < nums.size(); i++) {
                data[i] = nums[i];
            }
            buildSegmentTree(0, 0, n - 1);
        }
    }

    int sumRange(int i, int j) {
        return query(i,j);
    }

private:
    int n;
    int *data;
    int *tree;

    int query(int queryl,int queryr){
        return query(0,0,n-1,queryl,queryr);
    }

    int  query(int treeIndex,int l,int r,int queryl,int queryr){

        if(l==queryl&&r==queryr)
            return tree[treeIndex];
        int mid=l+(r-l)/2;
        int leftIndex=2*treeIndex+1;
        int rightIndex=2*treeIndex+2;

        if(queryl>=mid+1)
            return query(rightIndex,mid+1,r,queryl,queryr);
        else if(queryr<=mid)
            return query(leftIndex,l,mid,queryl,queryr);
        int leftresult = query(leftIndex, l, mid, queryl, mid);
        int rightresult = query(rightIndex, mid + 1, r, mid + 1, queryr);
        return leftresult + rightresult;
    }

    void buildSegmentTree(int treeIndex,int l,int r){
        if(l==r){
            tree[treeIndex]=data[l];
            return ;
        }

        int leftIndex=2*treeIndex+1;
        int rightIndex=2*treeIndex+2;

        int mid=l+(r-l)/2;
        buildSegmentTree(leftIndex,l,mid);
        buildSegmentTree(rightIndex,mid+1,r);
        tree[treeIndex]=tree[leftIndex]+tree[rightIndex];
    }
};