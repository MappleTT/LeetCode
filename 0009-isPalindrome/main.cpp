class Solution {
public:
    bool isPalindrome(int x) {
        long long  ans=0,sign,x1=x;
        sign=(x<0)? -1:1;
        while(x)
        {
            ans=ans*10+x%10;
            x/=10;
        }
        ans*=sign;
        if(ans==x1)
            return true;
        else
            return false;

    }
};