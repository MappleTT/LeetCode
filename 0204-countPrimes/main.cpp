class Solution {
public:
    int countPrimes(int n) {
        int count=0;
        for(int i=2;i<n;i++)
        {
            int x=1;
            for(int j=2;j*j<=i;j++)
            {

                if(i%j==0)
                {
                    x=0;
                    break;
                }
            }
            if(x==1)
                count++;
        }
        return count;

    }
};