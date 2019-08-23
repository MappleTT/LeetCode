class Solution {
public:
    int max3(int a,int b,int c)
    {
        return max(max(a,b),c);
    }
    int integerBreak(int n) {
        vector<int>data(n+1,-1);
        data[1]=1;
        for(int i=2;i<=n;i++)
        {
            for(int j=1;j<i;j++)
            {
                data[i]=max3(data[i],j*(i-j),j*data[i-j]);
            }
        }
        return data[n];

    }
};