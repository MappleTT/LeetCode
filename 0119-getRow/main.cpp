class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans(rowIndex+1,1);
        for(int i=1;i<=(rowIndex+1)/2;i++)
        {
            ans[i]=ans[rowIndex-i]=(long long) (rowIndex-i+1)*ans[i-1]/i;
        }
        return ans;
    }
};