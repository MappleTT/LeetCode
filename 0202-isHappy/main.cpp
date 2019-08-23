class Solution {
public:
    bool isHappy(int n) {
        int sum;
        //如果是快乐数，循环8次以内就可以得出结果了
        for(int i=0;i<8;i++){
            sum=0;
            while(n) {
                sum += (n % 10) * (n % 10);
                n /= 10;
            }
            n=sum;
            if(n==1)
                return true ;
        }
        return false;
    }
};
