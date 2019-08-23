class Solution {
public:
    double myPow(double x, int n) {
        double  ans=1;
        double  base=x;
        int m=1;
        if(x==1)
        {
            return x;
        }
        if(x==-1)
        {
            if(n%2==0)
                return 1;
            else
                return -1;
        }
        if(n<0)
        {
            m=0;
            n*=-1;
        }
        while(n)
        {
            if(n&1)
                ans*=base;
            base*=base;
            n>>=1;
        }
        if(m==0)
            ans=1/ans;
        return ans;

    }
};