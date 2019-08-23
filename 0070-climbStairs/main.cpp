class Solution {
public:
    int climbStairs(int n) {
        vector<int> me(n + 1, -1);
        me[0]=1;me[1]=1;
        for(int i=2;i<=n;i++)
        {
            me[i]=me[i-1]+me[i-2];
        }
        return me[n];
    }
};