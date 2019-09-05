class Solution {
public:

    double myPow(double x, int n) {
           long long f=n;
           double  ans=1;
           double  base=x;
           int m=1;
           if(x==1)
           {
               return 1;
           }
           if(x==-1)
           {
               if(f%2==0)
                   return 1;
               else
                   return -1;
           }
           if(f==0)
               return 1;
           if(f<0)
           {
               m=0;
               f*=-1;
           }
           while(f)
           {
               if(f&1)
                   ans*=base;
               base*=base;
               f>>=1;
           }
           if(m==0)
               ans=1/ans;
         return ans;
        
    }
};
