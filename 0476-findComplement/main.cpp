class Solution {
public:
    int findComplement(int num) {
        long long sum=0,b=1;
        while(num){
            if(!(num&1)){
                sum+=b;
            }
            b*=2;
            num>>=1;
        }
        return (int)sum;
    }
};